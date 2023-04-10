#include <stdio.h>
#include <string.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS


// Tutorial 8 Sanat Boodoo



char* myUppercase(char* a_message) {


	a_message[40];
	for (int i = 0; i < 40;i++) {

		if (a_message[i] >= 97) {

			a_message[i] = a_message[i] - 32;

		}

	}
	printf("%s", a_message);

	return a_message; 

}

int compareString(char* string1, char* string2)
{
	char string1Upper[20];
	char string2Upper[20];

	// Converting the strings to all capital letters and copying
	// them into placeholder strings (created above)
	strcpy_s(string1Upper, string1);
	strcpy_s(string2Upper, string2);

	strcpy_s(string1Upper, myUppercase(string1Upper));
	strcpy_s(string2Upper, myUppercase(string2Upper));

	// Getting the length of the strings
	int numChars1 = strlen(string1Upper);
	int numChars2 = strlen(string2Upper);

	int longerString;

	// Checking to see which string is longer
	if (numChars1 > numChars2)
	{
		longerString = numChars1;
	}
	else
	{
		longerString = numChars2;
	}

	// Comparing the strings to see if they are identical,
	// or if not, determining which comes first alphabetically
	for (int i = 0; i < longerString; i++)
	{
		if (string1Upper[i] != string2Upper[i])
		{
			if (string1Upper[i] > string2Upper[i])
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
	}
	return 0;
}

int stringcompare(char* a, char* b) {

	myUppercase(a);
	myUppercase(b);

	int flag;

	for (int i = 0;i < 20;i++) {

		if (a[i] >= 97) {
			flag = 1;
		}

	}

	return flag;
}

int main(int argc, char** argv) {

	// C:/T8_sboodoo/x64/Debug/ T8_Sboodoo.exe

	// argc takes the number of whole words
	// argv is the pointer of chars text
	//for (int i = 0; i < argc; i++) {

	//	printf("%s\n", argv[i]);
	//}


	// PRINTF STATEMENT (BASIC O)

	char myName[6] = "Sanat";

	//printf("\nEnter your name: ");

	// 
	//scanf("%s", myName);

	// Can place Limits, to certain amount of chars


	printf("\nHello %s", myName);

	// Using a Char format specifer combines all the ASCII Values together.
	printf("\n Hello %c", myName);


	//scanf("%s", myName);

	printf("\nHello %s", myName);

	//scanf_s("%s", myName, 20);

	printf("\nHello %s", myName);


	// C STRINGS

	char city1[20] = "";

	char city2[20] = "";

	printf("\n\nenter 2 cities:");


	// NOTE TO SELF: %s\0 IS HOW THE FORMAT MUST BE
	scanf_s("%s\0", city1, 20);
	scanf_s("%s\0", city2, 20);


	if (city1[1] > city2[1]) {


	}
	else
		printf("Cities = %s , %s ", city2, city1);



	// Alphabetize cities: 

	char holder[] = "";

	strcmp(city1, city2);

	printf("%i", strcmp(city1, city2));

	if (strcmp(city1, city2) < 0) {

		printf("Cities = %s , %s ", city1, city2);
	}
	else
		printf("Cities = %s , %s ", city2, city1);




	//strcpy();


	//strchr();

	printf("%i", strlen("Sanay"));

	printf("%i", atoi("Sanat"));





	// Making Own Functions


	char a[40] = "EnTEr SoMe tExT HeRe";

	myUppercase(a);







	//int main(int argc, int** argv)
	
		/*for (int i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}*/

		//char city1[20];
		//char city2[20];

		// Accepting user input for the names of the cities
		printf("Please enter a name for city number 1:\n");
		scanf_s("%s", &city1, 20);

		printf("Please enter a name for city number 2:\n");
		scanf_s("%s", &city2, 20);

		printf("The two cities are %s and %s\n", city1, city2);

		/*if (city1 > city2)
		{
			printf("%s comes before %s alphabetically\n", city2, city1);
		}
		else if (city2 > city1)
		{
			printf("%s comes before %s alphabetically\n", city1, city2);
		}*/

		// Comparing the two city names to figure out which 
		// comes first alphabetically
		if (strcmp(city1, city2) > 0)
		{
			printf("%s comes before %s alphabetically\n", city2, city1);
		}
		else if (strcmp(city1, city2) == 0)
		{
			printf("%s and %s are the same\n", city1, city2);
		}
		else if (strcmp(city1, city2) < 0)
		{
			printf("%s comes before %s alphabetically\n", city1, city2);
		}


		// Using the homemade string comparing function
		if (compareString(city1, city2) > 0)
		{
			printf("%s comes before %s alphabetically\n", city2, city1);
		}
		else if (compareString(city1, city2) == 0)
		{
			printf("%s and %s are the same\n", city1, city2);
		}
		else if (compareString(city1, city2) < 0)
		{
			printf("%s comes before %s alphabetically\n", city1, city2);
		}

	









	return 0;
}
