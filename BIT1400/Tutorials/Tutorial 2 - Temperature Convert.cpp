// Auth0r: Sanat Boodoo, T02a_TempChange Assignment - Tutorial 2


#include <iostream>

void main()
{
	// Assign the Variable Fehr to 0
	int fehr = 0;

	// I found a do..while loop online to continously ask for a temperature. 
	do {


		// Ask the user to input a number
		printf("Give me a Temperature in Fahrenheit:");

		// Taken from slides
		int numChars = scanf_s("%i", &fehr);

		// Float variable allows for decimal numbers 
		float celsius = (fehr - 32.0f) * 5.0f / 9.0f;

		//
		printf("\nThe temperature in Celsius is %f degrees.\n", celsius);


		// The statement is while fehr isnt more than 200 we repeat
	} while (fehr < 200);

	// If is more than 200 then we say:
	
	printf("please input a value less than 200");

		

}
