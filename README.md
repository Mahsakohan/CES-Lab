In this project we plan to calculate the operation point voltage of series of red, green, yellow and RG LEDs by an Arduino based system. The output voltage of the connected LEDs to Arduino-UNO will be shown in serial monitor. The following formula is used to select the correct resistor for a LED:

<img width="120" alt="Screenshot 2022-06-24 at 13 52 26" src="https://user-images.githubusercontent.com/107712303/175530978-058ebbdb-89fe-4d51-bea6-a2899c99fecc.png">


Where Vs is the source voltage, V(LED) is LED forward voltage, I(LED) is LED forward current and X is Number of LEDs to be connected in series. According to the above formula, the desired resistors of a red LED with the forward voltage of 1.8V, source voltage 5V and current of 20mA is a 220Ω one. We also calculated this issue for LEDs with other colors, which you can see in the following table.

<img width="1146" alt="Screenshot 2022-06-24 at 13 50 44" src="https://user-images.githubusercontent.com/107712303/175531013-67024ccd-faf7-42f6-bd08-628a13f8e14f.png">


The designed circuit is as follow:


<img width="916" alt="Screenshot 2022-07-13 at 11 12 58" src="https://user-images.githubusercontent.com/107712303/178698130-8504c851-50f4-4207-89f3-fa3819da547e.png">

The hardwares required to implement this project are as follows:

	Arduino Uno x 1
	Interfacing (power) Cable
	Breadboard
	Red LED x 1
	Green LED x 1
	Yellow LED x 1
	RG LED x 1
	Resistors 220 Ohm x 2 
	Resistors 180 Ohm x 1
	Resistors 150 Ohm x 2
	Wires 19x
