# Blink LED Example 🔄

This example demonstrates how to blink an LED using the PIC18F4550 microcontroller.

## 🛠️ Hardware Requirements
- PIC18F4550 microcontroller
- LED (any color)
- 220Ω resistor
- Breadboard and jumper wires
- PICkit programmer

## 🔌 Circuit Diagram


## 📝 How to Use
1. **Build the Circuit**: Connect the LED to **RB0** with a 220Ω resistor to GND.
2. **Open in MPLAB X**: Import this folder as a project.
3. **Build and Program**: Use the PICkit programmer to upload the code.
4. **Observe**: The LED will blink at 1-second intervals (500ms ON/OFF).

## ⚙️ Code Customization
- Change the blink speed by modifying the `__delay_ms(500);` value.
- Use a different pin by updating `#define LED LATB0` and `TRISB0 = 0`.

## 🐛 Troubleshooting
- **LED Not Blinking**: Check connections and ensure `RB0` is configured as output.
- **Code Not Uploading**: Verify programmer settings in MPLAB X.
- **Compiler Errors**: Ensure the XC8 compiler is installed and selected.

---

**Next Step**: Explore [GPIO Configuration](link-to-section) for more I/O examples!