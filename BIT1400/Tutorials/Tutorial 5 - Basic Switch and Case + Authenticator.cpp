#include <stdio.h>
#include <iostream>
using namespace std;



namespace name1 {

	string name = "Sanat Booodoo";
}
/* Tutorial 5 - Auth0r Sanat Boodoo

// BIT1400 LAB

// Tutorial 5 - Control + Input

// Sanat Boodoo

// Oct 18 2022

*/





// Step 3 Main Function
int main() {




	// Switch case

	int choice;


	printf("## Basic info sheet ##");

	printf("\n\nSelect an option:\n 1 - Display name \n 2 - display year of birth\n 3 - display favourite dessert\n What is your selection: ");

	scanf_s("%i", &choice);

	// Purpose of break ends the other cases from running, so if i choose case 2, the remainder of cases will output, so break literally breaks the switch function at the case.

	switch (choice) {

	case 1:
		printf("My name is Sanat Boodoo");
		break;
	case 2:
		printf("Birth year is 2004");
		break;
	case 3:
		printf("Favourite dessert is CheeseCake");
		break;
	default :
		printf("This is a wrong entry");
	}





	printf("\n");
	printf("\n");



	//Step 4 Input

	int readValue;

	printf("Enter a Value: ");

	scanf_s("%i", &readValue);

	printf("\n\nYou entered: %i", readValue);

	// when entered a integer, it will return the same integer

	// when entered a real number, or floating point num, it returned the integer of it

	// when entered a char it returned a negative value of -858993460

	




	// If /else if / else part 1

	if (readValue > 0) {

		printf("\nThis is a positive number");

	}

	else if (readValue < 0) {

		printf("\nThis is a negative number");
	}

	else

		printf("\nThis is zero");
	







	// If /else if / else part 2
	
	
	// Removing brackets makes the program build fail as there is a syntax error

	if ((readValue % 2) == 0) {

		printf("\nThis is an even number");
	}
	else
		printf("\nThis is an odd number");






	//If / else if / else part 3

	printf("\nLets see if the number can be divided by a prime number under 10");

	if (readValue % 2 == 0) {

		printf("\n%i can be divided by 2", readValue);
	}

	else if (readValue % 3 == 0) {

		printf("\n%i can be divided by 3", readValue);
	}

	else if (readValue % 5 == 0) {

		printf("\n%i can be divided by 5", readValue);
	}

	else if (readValue % 7 == 0) {

		printf("\n%i can be divided by 7", readValue);
	}

	else
		printf("\n%i cannot be divided by a prime number under 10", readValue);




	//If / else if / else part 4


	int password;

	int username;

	int guessPassword;

	int guessUsername;


	// char var up to 100 characters
	//char a_text[100];

	//scanf_s("%s", a_text[99]);

	//printf("My test %s", a_text);

	//strcmp(s1, s2) == 0;


	printf_s("enter your student number: ");

	scanf_s("%i", &username);

	printf_s("Set a numeric Password now: ");

	scanf_s("%i", &password);

	printf(" Try logging in now with your username: ");

	scanf_s("%i", &guessUsername);



	if (username == guessUsername) {

		printf("enter your password now:");

		scanf_s("%i", &guessPassword);

		if (password == guessPassword) {

			printf("Correct credentials");
		}
		else
			printf("Incorrect Credentials");
	}
	else
		printf("incorrect username"); 
	
	

	

	return 0;
}
