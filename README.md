In this project we plan to calculate the operation point voltage of a red LED by an Arduino based system. The output voltage of the connected LED to Arduino-UNO will be displayed on a 16x2 LCD. The following formula is used to select the correct resistor for a LED:

<img width="120" alt="Screenshot 2022-06-24 at 13 52 26" src="https://user-images.githubusercontent.com/107712303/175530978-058ebbdb-89fe-4d51-bea6-a2899c99fecc.png">


Where Vs is the source voltage, V(LED) is LED forward voltage, I(LED) is LED forward current and X is Number of LEDs to be connected in series. According to the above formula, the desired resistors of a red LED with the forward voltage of 1.8V, source voltage 5V and current of 20mA is a 220Ω one. We also calculated this issue for LEDs with other colors, which you can see in the following table.

<img width="1146" alt="Screenshot 2022-06-24 at 13 50 44" src="https://user-images.githubusercontent.com/107712303/175531013-67024ccd-faf7-42f6-bd08-628a13f8e14f.png">


In this circuit, the LED operation voltage information at different forward voltage will be displayed on a 16x2 LCD in a format of 0–5V which will be handled through coding. In order to manage the contrast of the LCD, the circuit also needs a potentiometer.
The designed circuit is as follow:

<img width="736" alt="Screenshot 2022-06-22 at 18 55 43" src="https://user-images.githubusercontent.com/107712303/175531066-ddbe878e-61f9-4b74-b658-18d71b4ffaba.png">

The hardware required to implement this project are as follows:

	Arduino Uno x 1
	Interfacing (power) Cable
	Breadboard
	Red LED x 1
	Resistors 220 Ohm x 2 
	16x2 LCD Display x 1
	Potentiometer 10K Ohm
	Wires 19x
