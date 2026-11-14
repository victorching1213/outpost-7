# Outpost 7: game data table

The real data behind the game and how it maps to game numbers. Generated from the game file, so it matches the game exactly.

## Real space weather, Nov 7, 2026 to Nov 14, 2026 (source: NASA DONKI space weather timeline, read pixel by pixel from a screenshot taken Nov 14, 2026)

| Game day | Real date | Solar flares | Biggest flare | Earth's magnetic field |
|---|---|---|---|---|
| Sol 1 | Nov 8, 2026 | 30 | M1.7 | Kp 5 (G1) geomagnetic storm |
| Sol 2 | Nov 9, 2026 | 16 | C5.5 | calm (Kp 3.3) |
| Sol 3 | Nov 10, 2026 | 11 | C9.4 | calm (Kp 3) |
| Sol 4 | Nov 11, 2026 | 11 | M1.6 | calm (Kp 2.7) |
| Sol 5 | Nov 12, 2026 | 18 | C7.2 | calm (Kp 1.7) |
| Sol 6 | Nov 13, 2026 | 11 | C5.5 | calm (Kp 1.3) |
| Sol 7 | Nov 14, 2026 | 4 | C4.2 | calm (Kp 1) |

## NASA DONKI timeline, day by day (events logged; level = how high the chart line was, 0 to 100)

| Game day | Real date | Sun clouds (CME) | Computer forecasts (ENLIL) | Particle storms (SEP) | Cloud hits Earth (ICME) | Fast solar wind (HSS) | Shield squeezed (MPC) | Radiation belt boosts (RBE) | Highest Kp |
|---|---|---|---|---|---|---|---|---|---|
| Sol 1 | Nov 8, 2026 | 2 (2 medium) | 1 | 0 (level 41) | 0 | 0 (level 75) | 0 (level 41) | 0 (level 68) | 5 |
| Sol 2 | Nov 9, 2026 | 3 (2 slow, 1 fast) | 1 | 0 (level 44) | 0 | 0 (level 68) | 0 (level 41) | 0 (level 82) | 3.3 |
| Sol 3 | Nov 10, 2026 | 3 (2 slow, 1 fast) | 2 | 0 (level 44) | 0 | 0 (level 58) | 0 (level 48) | 0 (level 88) | 3 |
| Sol 4 | Nov 11, 2026 | 1 (1 fast) | 1 | 0 (level 40) | 0 | 0 (level 37) | 0 (level 50) | 0 (level 88) | 2.7 |
| Sol 5 | Nov 12, 2026 | 2 (1 slow, 1 fast) | 0 | 0 (level 38) | 0 | 0 (level 28) | 0 (level 57) | 0 (level 83) | 1.7 |
| Sol 6 | Nov 13, 2026 | 4 (2 slow, 1 medium, 1 fast) | 1 | 0 (level 40) | 0 | 0 (level 15) | 0 (level 60) | 0 (level 88) | 1.3 |
| Sol 7 | Nov 14, 2026 | 2 (2 slow) | 0 | 0 (level 39) | 0 | 0 (level 14) | 0 (level 54) | 0 (level 84) | 1 |

## NASA daily use per astronaut and the game scale

| Resource | NASA daily use | Game points a sol | A full store (100) holds | Other uses |
|---|---|---|---|---|
| 💧 Water | about 3 L to drink + 1 L to wash = 4 L | 16 | 25 L | Grow food or plants: -4. Dirt sample lab: -2. |
| 🫁 Oxygen | 0.84 kg | 16 | 5.25 kg | Hull leaks from meteors and grit from dust devils lower it. |
| 🍎 Food | 1.8 kg | 12 | 15 kg | Food stores last longer, so it drains slower. |

## Power (fuel) costs and sources

| What | Power |
|---|---|
| Walking | 1 power every 2 steps (every 4 with a suitport) |
| Hygiene (hot water) | -4 power a night |
| Heaters and module upkeep | -(6 + 2 per non-power module) a night, times storm strength |
| Science tasks | Very easy 1, Easy 2, Medium 5, Hard 7, Challenge 10 power (minimum) |
| Building | 3 power per crate, times the material (regolith 1.25x, polyethylene 1.5x, Kevlar 0.5x) |
| Solar panel | +18 a sol on Mars, +20 on the Moon. Dust storm 30%, dust devils 70%, global dust storm 20% |
| Fission reactor | +20 a sol |
| Fuel cell | +10 a sol |
| Storm costs | Deep cold -10, moonquake -8, global dust storm or CME -6 |
| Power tank | Holds 150. If it is empty at night, water and oxygen each lose 30 (battery bank adds a 20 reserve) |

## Modules and the NASA systems they are based on

| Module | Crates | What it does | Real NASA basis |
|---|---|---|---|
| 🏠 Habitat | 3 | +15 oxygen and +15 water a sol (recycles air and water). Shelter: +6 shield. | ISS modules and NASA habitat designs: air and water recycling plus shelter |
| 🔆 Solar panel | 2 | +18 power a sol (Moon 20). Dust storms cut it to 30%. | ISS solar arrays; Spirit and Opportunity rovers |
| ⚛️ Fission reactor | 4 | +20 power a sol, storm or not. | NASA Kilopower fission reactor test (2018) |
| 🧱 Regolith wall | 1 | +5 shield if it touches rocket or habitat. | NASA 3D-printed habitat challenge: regolith shielding |
| 🛢️ Water tank | 2 | +12 water a sol. +7 shield if it touches rocket or habitat. | Water is a strong radiation shield (hydrogen-rich) |
| 🌱 Greenhouse | 2 | +6 oxygen and +6 food a sol. Grow plants in local soil. | NASA Veggie plant chamber on the ISS |
| 📡 Comms dish | 2 | Send data back to Earth. | Deep Space Network and Mars relay orbiters |
| 🌡️ Weather station | 1 | Weather log, and see tomorrow's forecast. | Perseverance MEDA weather station |
| 🩺 Med bay | 2 | Daily health checks. | ISS crew health checks |
| ⛏️ Ice drill | 2 | Lets you drill for water at ice. | NASA lunar and Mars ice-mining studies |
| ♻️ Water recycler | 2 | +12 water a sol by cleaning used water, and halves water lost on a night with no power. Only one counts. | The Water Recovery System on the ISS recycles about 98% of the crew's water, including sweat, breath and urine. |
| 🫧 Oxygen generator | 2 | +14 oxygen a sol by splitting water: uses 3 water a sol. | The ISS Oxygen Generation System uses electricity to split water into oxygen to breathe and hydrogen. |
| 🥫 Food pantry | 1 | +8 food a sol from packed meals. | ISS food arrives on cargo ships. Most is packed to last a long time, and astronauts eat about 1.8 kg of food a day. |
| 🔋 Battery bank | 2 | Stores 20 extra power for the night, so heaters stay on even if power hits 0. No power upkeep. | The ISS stores solar power in lithium-ion batteries so it keeps running during the 45 minutes of darkness on every orbit. |
| 🚙 Pressurized rover | 3 | Ride in a shielded cabin: steps outside the safe zone cost half as much radiation shield. | NASA has designed pressurized rovers so astronauts can drive far from base in shirt sleeves, protected inside the cabin. |
| ⚗️ Fuel cell | 2 | +10 power and +4 water a sol, storm or not. No power upkeep. | Fuel cells on Apollo and the Space Shuttle combined hydrogen and oxygen to make electricity, and the crews drank the water they made. |
| 🌬️ CO2 scrubber | 1 | +10 oxygen a sol by pulling carbon dioxide out of the air. | The ISS Carbon Dioxide Removal Assembly pulls the carbon dioxide astronauts breathe out so it does not build up. |
| 🦠 Algae bioreactor | 2 | +6 oxygen and +6 food a sol from fast-growing algae. | Algae turn carbon dioxide into oxygen and can be eaten. A photobioreactor that grew algae for oxygen was tested on the ISS in 2019. |
| 🚪 Suitport | 2 | Climb straight into your suit from inside: walking uses half the power. | NASA tested suitports on its Space Exploration Vehicle rover: the suit hangs on the outside wall, so dust stays out and getting ready takes minutes. |

## Game modes: starting meters and science targets

| Mode | Crates | Start power (of 150) | Start water / oxygen / food | Start radiation shield | Day length | Storm strength | Mars target | Moon target | Required modules |
|---|---|---|---|---|---|---|---|---|---|
| Cadet | 32 | 150 | 100 / 100 / 100 | 100 | 300 s | 0.5x | 760 | 960 | 🏠 Habitat, ⚡ Power (solar panel or reactor) |
| Junior astronaut | 28 | 150 | 100 / 100 / 100 | 100 | 240 s | 0.75x | 690 | 870 | 🏠 Habitat, ⚡ Power (solar panel or reactor), 📡 Comms dish |
| Commander | 25 | 150 | 100 / 100 / 100 | 100 | 180 s | 1x | 470 | 740 | 🏠 Habitat, ⚡ Power (solar panel or reactor), 📡 Comms dish, 🌱 Greenhouse |
| Veteran | 22 | 135 | 100 / 100 / 100 | 100 | 150 s | 1.15x | 340 | 610 | 🏠 Habitat, ⚡ Power (solar panel or reactor), 📡 Comms dish, 🌱 Greenhouse, 🩺 Med bay |
| Free play | 40 | 150 | 100 / 100 / 100 | 100 | 360 s | 0.75x | none | none | none |

A cargo lander also brings +4 crates on the morning of sol 4.

## How the Nov 8 to 14, 2026 space weather was measured

Source: the NASA DONKI space weather timeline (screenshot taken Nov 14, 2026, 2486 x 1296 px). The cloud computer could not reach api.nasa.gov, so every value was measured from the chart pixels.

| What | Method | Accuracy check |
|---|---|---|
| Time axis | Day ticks at x = 102.5, 473.5 … 2330.5 px: 371.33 px a day (15.47 px an hour) | The chart cursor (x = 979.5) reads 08:40 UTC; the label says 08:41:06 |
| Kp (GST row) | Bar height / 13.5 px = Kp; heights fall on exact thirds (0.33, 0.67, 1 …) | Nov 8 max Kp 5.0 matches the NOAA Kp list already in the game |
| Flare class (FLR row) | Log fit of curve height vs the 14 Nov 7 to 8 flares with known NOAA classes | Largest error 8% of flare strength |
| Flare times and count | Peaks whose flux rose about 1.4x within an hour (the GOES flare rule) | On Nov 8 the method found 20 of the 30 NOAA flares, all 3 M-class, each within 5 min. Nov 9 to 14 counts are a minimum. Nov 8 uses the exact NOAA list |
| CMEs and ENLIL runs | Centers of the round markers; colour = speed band (yellow slow, orange medium, red fast) | 17 CMEs and 6 ENLIL runs, same as a visual count |
| SEP, ICME, HSS, MPC, RBE | No DONKI event markers in the window, so 0 events. Daily "level" = mean height of the data line, 0 to 100 of the row | Relative only: no units on the chart |

### Solar flares Nov 9 to 14 (peak time UTC, class)

| Day | Flares |
|---|---|
| 2026-11-09 | 00:27 C2.4, 01:10 C4.9, 02:24 C1.1, 04:08 C5.5, 05:18 C1.8, 06:28 C1.4, 08:55 C2.0, 11:15 C1.3, 13:15 C1.4, 14:25 C5.5, 15:08 C2.9, 17:12 C5.5, 18:06 C3.2, 19:47 C1.6, 20:14 C1.7, 23:43 C3.0 |
| 2026-11-10 | 01:40 C2.0, 03:28 C2.4, 04:03 C3.2, 07:05 C2.6, 08:35 C9.4, 10:00 C8.9, 12:16 C1.3, 13:25 C3.2, 16:59 C1.3, 18:20 C2.3, 20:32 C2.4 |
| 2026-11-11 | 00:36 C1.1, 03:46 C2.1, 04:29 C2.2, 10:10 B9.6, 13:28 C1.0, 14:38 C1.2, 17:48 C3.2, 18:23 C2.2, 20:15 C1.3, 21:17 M1.6, 22:23 C1.1 |
| 2026-11-12 | 00:35 C1.8, 02:43 C2.4, 03:41 C7.2, 04:28 C1.8, 05:26 C1.2, 06:20 C1.7, 08:01 B9.1, 08:51 C2.1, 10:05 C2.1, 11:11 C4.0, 12:25 C2.7, 15:00 C2.6, 16:21 C1.2, 18:53 C1.0, 20:10 C1.8, 20:49 B8.6, 22:41 C1.3, 23:59 B8.6 |
| 2026-11-13 | 00:42 B9.6, 01:28 C1.1, 09:44 C1.1, 11:17 C1.0, 12:27 B9.6, 13:53 C1.0, 14:20 C1.2, 17:38 C1.3, 18:20 C5.5, 21:57 C1.6, 23:38 C2.0 |
| 2026-11-14 | 00:09 C1.6, 01:38 C1.8, 03:31 C1.2, 06:06 C4.2 |

### Kp every 3 hours (UTC start time)

| Day | 00 | 03 | 06 | 09 | 12 | 15 | 18 | 21 |
|---|---|---|---|---|---|---|---|---|
| 2026-11-08 | 5.0 | 3.33 | 3.0 | 3.33 | 2.67 | 3.33 | 4.0 | 2.67 |
| 2026-11-09 | 3.0 | 3.33 | 2.67 | 2.67 | 2.0 | 2.67 | 2.67 | 2.0 |
| 2026-11-10 | 3.0 | 3.0 | 2.33 | 2.67 | 1.33 | 3.0 | 2.33 | 2.0 |
| 2026-11-11 | 1.67 | 0.67 | 1.67 | 2.33 | 1.0 | 1.33 | 2.67 | 1.33 |
| 2026-11-12 | 1.0 | 1.67 | 1.67 | 0.67 | 0.67 | 0.33 | 1.33 | 1.67 |
| 2026-11-13 | 1.33 | 0.33 | 1.33 | 1.0 | 0.67 | 0.67 | 0.67 | 0.67 |
| 2026-11-14 | 0.33 | 0.67 | 1.0 |  |  |  |  |  |

### CMEs (start time UTC, speed band) and ENLIL runs

CMEs: 11-08 00:44 medium, 11-08 08:46 medium, 11-09 09:11 slow, 11-09 10:52 fast, 11-09 18:15 slow, 11-10 01:59 slow, 11-10 02:12 fast, 11-10 05:30 slow, 11-11 23:23 fast, 11-12 01:53 slow, 11-12 21:13 fast, 11-13 01:27 fast, 11-13 03:26 slow, 11-13 09:24 medium, 11-13 21:25 slow, 11-14 01:50 slow, 11-14 04:00 slow.

ENLIL runs: 11-08 00:43, 11-09 18:15, 11-10 01:59, 11-10 02:12, 11-11 23:23, 11-13 03:26.

Data ends Nov 14, 10:00 UTC.
