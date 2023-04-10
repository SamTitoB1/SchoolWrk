#include <stdio.h>
#include <assert.h>

// Tutorial 6 - Auth0r Sanat Boodoo BIT1400 LAB




// Finding if a nymber is prime or not using a For loop
int isPrime(unsigned int toTest) {


	// define counter

	int counter;

	// initialize prime as being true
	int prime = 1;

	//printf("Enter a positive integer: ");
	//scanf_s("%d", &toTest);

	// 1 and 0 cannot be prime numbers to be considered
	if (toTest == 0 || toTest == 1)
		prime = 0;

	// for counter start at 2, counter is less than or equal to testnum divided by 2,
	for (counter = 2; counter <= toTest / 2; counter++) {

		// input can be divided by counter then it is not prime
		if (toTest % counter == 0) {
			prime = 0;
			break;
		}
	}

	// Checking if input is prime or not
	//printf("%i", prime);
	return prime;
}


// Finding if a number is prime or not using a while loop
int isPrimeWhile(unsigned int toTest) {
	// Initialize counter as 2
	int counter = 2;

	int prime = 1;
	if (toTest == 0 || toTest == 1)
		prime = 0;


	//While coynter less than input  add one to counter and check for prime.

	while (counter <= toTest / 2) {


		counter++;


		if (toTest % counter == 0) {
			prime = 0;
			break;
		}

	}

	// Checking using print 1 or 0
	//printf("%i", prime);

	return 0;

}



// Task 4 : Create an Inventory Array

// id name[size] = {values}

int inventory[10] = { 2,3,4,5,2,1,4,5,0,32 };




// Prints number values in an array
int printInventory(int* invSize) {

	int i = 0;
	/*

		while (i < 10) {

			printf("%i - ", inventory[i + 1]);

			i++;
		}
		*/

		// for loop printing inventory
	for (int i = 0; i < 10; i++) {

		printf("%i_", inventory[i]);
	}

	return 0;


}




int fillInventory() {

	int balance;

	printf("\nEnter values that you would like to store: \n");

	
	int array1[10];

	for (int i = 0; i < 10; i++) {
	
		printf("%d:", i+1);
		scanf_s("%d", &balance);
		array1[i] = { balance };
	}

	for (int i = 0; i < 10; i++) {

		printf("Your lotto numbers are: %d-", array1[i]);	
	}

	return 0;
}


// Search for value

int findValue(int findValue){



	printf("Enter a vlaue to search for: ");
	scanf_s("%d", &findValue);

	int inventory[4] = {1,2,3,4};

	for (int i = 0; i < 4;) {
		
		printf("%d\n", inventory[i]);
		
		if (inventory[i] == findValue) {
			// Did i plus 1 to remove the 0 value of the starting
			printf("\nYou found %d! it is at index %d", inventory[i], i + 1);
			break;
		}
		else
			i++;

		if (inventory[i] != findValue && i >= 4) {
			printf("The value could not be found");
			break;
		}
	}

	return 0;
}



int main() {

	assert(isPrime(2) == 1);
	assert(isPrime(27) == 0);

	isPrimeWhile(27);

	//printInventory(inventory);

	//fillInventory();

	findValue(2);
	findValue(9);

	return 0;
}
