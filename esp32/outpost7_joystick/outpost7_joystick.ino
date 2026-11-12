// Outpost 7 joystick controller (ESP32 + KY-023)
// Wiring: GND->GND, +5V->3V3, VRx->GPIO34, VRy->GPIO35, SW->GPIO32
// Sends over USB at 115200 baud: "MOVE U", "MOVE D", "MOVE L", "MOVE R", "BTN J"
const int PIN_X  = 34;   // VRx
const int PIN_Y  = 35;   // VRy
const int PIN_SW = 32;   // SW (stick click)

const int  LOW_T  = 1000;   // below this = pushed one way
const int  HIGH_T = 3000;   // above this = pushed the other way
const bool FLIP_X = false;  // set true if left/right are reversed
const bool FLIP_Y = false;  // set true if up/down are reversed
const unsigned long REPEAT_MS = 200;  // hold = one step every 200 ms

char lastDir = 0;
unsigned long lastMove = 0, lastBtnTime = 0;
int lastBtn = HIGH;

void setup() {
  Serial.begin(115200);
  pinMode(PIN_SW, INPUT_PULLUP);
  analogReadResolution(12);   // values 0..4095, centre ~2048
  Serial.println("READY");
}

void loop() {
  int x = analogRead(PIN_X);
  int y = analogRead(PIN_Y);
  if (FLIP_X) x = 4095 - x;
  if (FLIP_Y) y = 4095 - y;

  char dir = 0;
  if (abs(x - 2048) > abs(y - 2048)) {
    if (x < LOW_T) dir = 'L'; else if (x > HIGH_T) dir = 'R';
  } else {
    if (y < LOW_T) dir = 'U'; else if (y > HIGH_T) dir = 'D';
  }

  unsigned long now = millis();
  if (dir && (dir != lastDir || now - lastMove >= REPEAT_MS)) {
    Serial.print("MOVE ");
    Serial.println(dir);
    lastMove = now;
  }
  lastDir = dir;

  int b = digitalRead(PIN_SW);
  if (b == LOW && lastBtn == HIGH && now - lastBtnTime > 250) {
    Serial.println("BTN J");
    lastBtnTime = now;
  }
  lastBtn = b;

  delay(20);
}
