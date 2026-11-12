# ESP32 joystick for Outpost 7

**Parts:** ESP32 DevKit (classic, CP2102 or CH340), KY-023 joystick module, 5 jumper wires, USB data cable.

**Wiring**

| Joystick | ESP32 |
|---|---|
| GND | GND |
| +5V | 3V3 (not 5V) |
| VRx | GPIO 34 |
| VRy | GPIO 35 |
| SW | GPIO 32 |

On an ESP32-S3, use GPIO 1, 2 and 3 and change the pin numbers at the top of the sketch.

**Upload**
1. Install the Arduino IDE.
2. Settings → Additional boards manager URLs: `https://espressif.github.io/arduino-esp32/package_esp32_index.json`
3. Tools → Board → Boards Manager → install **esp32** by Espressif Systems.
4. Open `outpost7_joystick/outpost7_joystick.ino`, choose Tools → Board → **ESP32 Dev Module** and the USB port, then click Upload (hold BOOT if it sticks on "Connecting…").
5. Check it in Tools → Serial Monitor at 115200 baud, then **close the Serial Monitor**.

**Play**
Open `index.html` in Chrome or Edge, start a mission, click **🎮 Connect joystick** (top right) and pick the ESP32's port.
- Push the stick: the astronaut walks one tile (holding repeats every 200 ms).
- Click the stick: starts the sol from the briefing, or does the highest-scoring task available on your tile.

**Hand-control challenges** (the timer stops while you play; the arrow keys or WASD plus Space work too)
- **🚙 Rover dash:** do the *Rover test drive* activity on any empty tile, then steer to the flag in 20 s. +15 science and the rover spots a new place on the map.
- **🔧 Leak hunt:** the morning after a micrometeorite or meteor shower (Moon). Sweep the scanner, click to patch. Saves up to 3/4 of the oxygen the leaks cost.
- **🛬 Supply drop landing:** the morning of sol 4. Hold up to brake, left/right to slide. Perfect landing = 6 crates, crash = 2, skip = 4.
- **☀️ Sun tracker:** the morning of a dust storm day (Mars), if you have a solar panel. Keep the ring on the Sun to win back up to 3/4 of the lost solar power.

On a briefing card, push the stick to move between buttons and click to press the highlighted one.

**Protocol (one line each, 115200 baud):** `MOVE U`, `MOVE D`, `MOVE L`, `MOVE R`, `BTN J`.
