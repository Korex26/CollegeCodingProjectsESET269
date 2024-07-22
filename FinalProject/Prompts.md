Final project for ESET 269 at Texas A&M University, Fall 2019

Contributors:
- Kristopher Elers
- Alex Liu
- Maksym Sury

This project was created in Keil and requires Teraterm (Baud Rate: 115200) and a MSP432P401R.  Menu option 3 will also require a temperature sensor on a breadboard with jumper wires to be hooked up to P5.4 with power running to 3.3V connector and grounded at the ground connector underneath the 5V pin on the MSP432 Launchpad.  Please check that your circuit is correct before connecting the power.  The temperature sensor will get very hot if it's incorrect and could potentionally destroy the MSP432.

The program will display:
  
  MSP432 Menu
1. RGB Control
2. Digital Input
3. Temperature Reading
4. Quit

- Selecting option 1 will prompt the user for a RGB value (1-7), a toggle time, and a number of blinks. It will then blink the LED the desired color, with the desired delay, the desired amount of times.
- Selecting option 2 will print the current button(s) that are held down. Please hold the button(s) down **BEFORE** pressing enter.
- Selecting option 3 will ask the user for a number of temperature readings (1-5) to perform and will print the temperature that the temperature sensor is reading in both Celsius and Fahrenheit.
- Selecting option 4 will stop the program.
