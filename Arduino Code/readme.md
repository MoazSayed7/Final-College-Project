# OV7670  
Datasheet for OV7670:  
https://www.voti.nl/docs/OV7670.pdf  

-------------------------------------------------------------------------------  
  
Compiling in Arduino IDE:  

1. Download all files
3. Open "ExampleUart.cpp" in Arduino IDE
4. Select Tools->Board->Arduino Uno/Nano
  
-------------------------------------------------------------------------------
  
### Connections for Arduino Uno/Nano  
  
OV7670 PINS connections:  
  
VSYNC - PIN2  
XCLCK - PIN3 (must be level shifted from 5V -> 3.3V)  
PCLCK - PIN12  
SIOD  - A4 (I2C data) - 10K resistor to 3.3V  
SIOC  - A5 (I2C clock) - 10K resistor to 3.3V  
D0..D3 - A0..A3 (pixel data bits 0..3)  
D4..D7 - PIN4..PIN7 (pixel data bits 4..7)  
3.3V  - 3.3V  
RESET - 3.3V  
GND   - GND  
PWDN  - GND  
  
-------------------------------------------------------------------------------
   
### Connections for Arduino Mega  
  
OV7670 PINS connections:  
  
VSYNC - PIN2  
XCLCK - PIN9 (must be level shifted from 5V -> 3.3V)  
PCLCK - PIN12  
SIOD  - PIN20-SDA (I2C data) - 10K resistor to 3.3V  
SIOC  - PIN21-SCL (I2C clock) - 10K resistor to 3.3V  
D0..D7 - PIN22..PIN29 (pixel data bits 0..7)  
3.3V  - 3.3V  
RESET - 3.3V  
GND   - GND  
PWDN  - GND  
  
-------------------------------------------------------------------------------
  
Special thanks to
https://github.com/indrekluuk/LiveOV7670
