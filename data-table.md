# Outpost 7: game data table

The real data behind the game and how it maps to game numbers. Generated from the game file, so it matches the game exactly.

## Real space weather, Nov 1, 2026 to Nov 8, 2026 (source: NOAA Space Weather Prediction Center (GOES X-ray flares and planetary Kp index))

| Game day | Real date | Solar flares | Biggest flare | Earth's magnetic field |
|---|---|---|---|---|
| Sol 1 | Nov 2, 2026 | 4 | B8.0 | calm (Kp 3) |
| Sol 2 | Nov 3, 2026 | 5 | C1.1 | calm (Kp 2) |
| Sol 3 | Nov 4, 2026 | 3 | C2.2 | calm (Kp 3) |
| Sol 4 | Nov 5, 2026 | 9 | M3.5 | calm (Kp 2) |
| Sol 5 | Nov 6, 2026 | 22 | C5.6 | calm (Kp 3) |
| Sol 6 | Nov 7, 2026 | 29 | M1.9 | Kp 5 (G1) geomagnetic storm |
| Sol 7 | Nov 8, 2026 | 30 | M1.7 | Kp 5 (G1) geomagnetic storm |

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
| Cadet | 32 | 150 | 100 / 100 / 100 | 100 | 300 s | 0.5x | 690 | 920 | 🏠 Habitat, ⚡ Power (solar panel or reactor) |
| Junior astronaut | 28 | 150 | 100 / 100 / 100 | 100 | 240 s | 0.75x | 620 | 860 | 🏠 Habitat, ⚡ Power (solar panel or reactor), 📡 Comms dish |
| Commander | 25 | 150 | 100 / 100 / 100 | 100 | 180 s | 1x | 440 | 710 | 🏠 Habitat, ⚡ Power (solar panel or reactor), 📡 Comms dish, 🌱 Greenhouse |
| Veteran | 22 | 135 | 100 / 100 / 100 | 100 | 150 s | 1.15x | 340 | 610 | 🏠 Habitat, ⚡ Power (solar panel or reactor), 📡 Comms dish, 🌱 Greenhouse, 🩺 Med bay |
| Free play | 40 | 150 | 100 / 100 / 100 | 100 | 360 s | 0.75x | none | none | none |

A cargo lander also brings +4 crates on the morning of sol 4.