# 📺 LCD Scrolling Message using LPC2148

## 📌 Project Overview

This project demonstrates how to display a scrolling message on a 16x2 LCD using the LPC2148 ARM7 microcontroller. The scrolling effect is created by continuously shifting the displayed text from right to left. This project is useful for learning LCD interfacing, GPIO programming, and delay implementation in Embedded C.

---

## 🚀 Features

- Display scrolling text on a 16x2 LCD
- 8-bit LCD interfacing
- Continuous scrolling animation
- Configurable scrolling speed
- Written in Embedded C
- Developed using Keil µVision
- Suitable for beginners learning LPC2148

---

## 🛠 Hardware Requirements

- LPC2148 Development Board
- 16x2 Character LCD
- Power Supply (5V)
- Connecting Wires

---

## 💻 Software Requirements

- Keil µVision 4 / 5
- Flash Magic
- Embedded C

---

## 📂 Project Files

| File | Description |
|------|-------------|
| lcd_test_scroll.c | Main application program |
| lcd.c | LCD driver functions |
| lcd.h | LCD function declarations |
| lcd_defines.h | LCD pin configuration |
| delay.c | Delay functions |
| delay.h | Delay function declarations |
| defines.h | Common macro definitions |
| types.h | User-defined data types |

---

## 🔌 LCD Connections

| LCD Pin | LPC2148 Pin |
|----------|-------------|
| D0-D7 | P0.8 - P0.15 |
| RS | P0.16 |
| RW | P0.17 |
| EN | P0.18 |

> **Note:** Pin numbers can be modified according to your hardware connections.

---

## ⚙️ How It Works

1. Initialize the LCD.
2. Configure GPIO pins as outputs.
3. Load the message into a character array.
4. Display the message on the LCD.
5. Shift the displayed characters one position at a time.
6. Repeat continuously to create a scrolling effect.

---

## 📸 Output

Example LCD Output

```
LCD SCROLLING
MESSAGE USING
LPC2148
```

The text scrolls continuously from right to left.

---

## ▶️ How to Run

1. Open the project in Keil µVision.
2. Build the project.
3. Generate the HEX file.
4. Flash the HEX file into LPC2148 using Flash Magic.
5. Reset the board.
6. Observe the scrolling message on the LCD.

---

## 📚 Concepts Covered

- ARM7 LPC2148
- GPIO Programming
- LCD Interfacing
- Embedded C Programming
- Delay Functions
- String Handling
- Character Display

---

## 🎯 Applications

- Digital Notice Boards
- Information Display Systems
- Welcome Message Displays
- Industrial Monitoring
- Embedded User Interfaces
- Educational Projects

---

## 📖 Learning Outcomes

By completing this project, you will learn:

- LCD interfacing with LPC2148
- Embedded C programming
- GPIO configuration
- Delay implementation
- String manipulation
- Embedded firmware development

---

## 🖼 Repository Structure

```
LPC2148-LCD-Scrolling-Message
│
├── defines.h
├── delay.c
├── delay.h
├── lcd.c
├── lcd.h
├── lcd_defines.h
├── lcd_test_scroll.c
├── types.h
└── README.md
```

---

## 🔮 Future Improvements

- 4-bit LCD Mode
- Custom Characters
- UART Message Display
- RTC Time Display
- Sensor Data Scrolling
- Menu-Based LCD Interface

---

## 👨‍💻 Author

**Omkar Sabale**

**Bachelor of Technology (Electronics & Telecommunication Engineering)**

Embedded Systems | Firmware Development | ARM7 | LPC2148 | IoT

