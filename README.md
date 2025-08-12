# AVR LCD Display Effects

This project demonstrates multiple LCD display effects using an **AVR microcontroller** (ATmega series) and the **HD44780-based LCD**.  
It includes several examples such as static text, scrolling text, blinking text, alignment, marquee (circular scrolling), bouncing text, and line shifting.

## 📂 Files Included
- **main.c** → The main source code with all effect examples (comment/uncomment to try each one).
- **LCD.h** → LCD driver header file.
- **LCD.c** → LCD driver source file (if used).
- **Simulation.pdsprj** → Proteus simulation file for testing without hardware.

## 🛠 Hardware Requirements
- AVR microcontroller (e.g., ATmega16/32/328P)
- 16x2 Character LCD (HD44780 or compatible)
- Potentiometer for contrast control
- Resistors & connecting wires
- Power supply (5V)

## ⚙ Connections
| LCD Pin | AVR Pin |
|---------|---------|
| RS      | PA0     |
| RW      | PA1     |
| E       | PA2     |
| D4-D7   | PC4-PC7 |
| VSS/VDD | GND / +5V |
| VEE     | Potentiometer output |

*(You can adjust pins in `LCD.h` to match your hardware.)*

## 🚀 How to Use
1. Open the project in **Atmel Studio / Microchip Studio** or any AVR C compiler.
2. Connect the LCD according to the pin configuration in `LCD.h`.
3. Upload the code to your AVR microcontroller or run the **Proteus simulation**.
4. In `main.c`, uncomment the desired section to run the effect you want.

## 📜 Available LCD Effects
1. **Static Message** – Displays a fixed message.
2. **Simple Scrolling** – Scrolls the message across the display.
3. **Blinking Text** – Makes a text appear and disappear periodically.
4. **Text Alignment** – Left, right, and center alignment.
5. **Circular Scrolling (Marquee)** – Infinite looping text effect.
6. **Bouncing Text** – Moves text right to left and back forever.
7. **Line Shifting** – Displays on line 1, then shifts to line 2.

## 🖥 Simulation
The included **Proteus simulation file** lets you test all effects without real hardware.  
- Double-click the MCU in Proteus and load the compiled `.hex` file.
- Run the simulation to see the effects in action.

---

**Author:** Ahmed Shaban  
**License:** MIT License
