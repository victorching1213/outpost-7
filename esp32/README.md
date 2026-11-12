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

**Protocol (one line each, 115200 baud):** `MOVE U`, `MOVE D`, `MOVE L`, `MOVE R`, `BTN J`.
