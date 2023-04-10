#include <stdio.h>


// Assignment 6 - Auth0r Sanat Boodoo



// Basic Sort Function where lowest values are at index 0 increasing to size of array
void sortArray(int array[], int size) {

	int holder;

	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size - 1; j++) {

			// Swaping values to right side

			// checking each value and swapping it to the index to the right
			if (array[j] > array[j + 1]) {

				holder = array[j];
				array[j] = array[j + 1];
				array[j + 1] = holder;
			}
		}
	}
}






// ----------Question 1: Calculate the Average for Students’ Top N Grades ----------

// Goal: In an Array make a function that spits out all alphabet letters, and returns
//       the difference of letter position

/*
	TASKS:
		1. Drop Lowest Grade [x]
		2. Drop N Lowest Grades [x]
		3. Calc Average Top N Grades []

*/

int calcStuAvg(int array[], int n) {

	int i;
	int sum = 0;
	double average;




	for (i = 0; i < n; ++i) {
		// adding integers entered by the user to the sum variable
		sum += array[i];
	}

	sortArray(array, n);

	// Drop lowest

	// explicitly convert sum to double
	// then calculate average
	average = (double)sum / n;

	printf("Average = %.2lf", average);

	return average;
}


// ----------Task 1: Drop Lowest Grade ----------

int* dropLowest(int* a_grades, int size) {
	
	int i;
	int counter = 0;

	for (i = 0; i < size; i++) {
		if (a_grades[i] < a_grades[counter])
			counter = i;
	}
	// We accomodate for the 0 index
	// This sorts the array from min to max
	for (i = counter; i < size - 1; i++) {
		a_grades[i] = a_grades[i + 1];
	}
	return a_grades;
}

// ---------- Task 2: Drop N Lowest -----------

int* dropNLowest(int* a_grades, int size) {
	
	int i;
	// n amount of grades
	int n;

	printf("\n\nHow many grades do you not want to be considered: ");
	scanf_s("%d", &n);

	//We call the drop lowest grade and run it back n amouynt of times
	for (i = 0;i <= n;i++)
		a_grades = dropLowest(a_grades, size);

	printf("\n\n%i grades are removed.", n);

	for (i = 0; i < size - n;i++)
		printf("\n%i", a_grades[i]);

	return a_grades;
}


//---------- Question 2: Crazy Alphabet Song ---------- [X]

// Goal: In an Array make a function that spits out all alphabet letters, and returns
//       the difference of letter position


char letters[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

int alphabetSoup(char start, char end) {
	int startIdx;
	int endIdx;

	// Checks what is the value associated with start input

	for (int i = 0; i < 26; i++) {
		if (letters[i] == start)
			startIdx = i;
	}
	for (int j = 0; j < 26; j++) {
		if (letters[j] == end)
			endIdx = j;
	}
	for (int i = startIdx; i < endIdx + 1; i++) {
		printf("\n%c", letters[i]);
	}
	// Finds the number in between start and end 
	int difference = (endIdx - startIdx);

	return difference;
}



//---------- Question 3: Char Array Replace-All ----------

// Goal: In an Array make a function that Replaces all of the same value to something else.
//       It will return number of chars replaced

int replaceAllCh(char array[], int size, char oldChar, char newChar) {

	int i;
	int counter = 0;
	char holder = '\0';

	for (i = 0; i < size; i++) {
		if (array[i] == newChar)
			counter++;

		if (array[i] == oldChar) {
			array[i] = newChar;
		}
	}
	return counter;
}





int main() {


	// -------------QUESTION 1 ----------------------------------

	// NOTE TO SELF: to initialize an array do like so where a size is initialized, values can be added after

	int grades[10] = {};
	int i;
	int size;
	int sum = 0;


	printf("You have a size of 10 values to fill\n How many would you like to fill: ");
	scanf_s("%d", &size);

	for (i = 0; i < size; ++i) {
		printf("Enter number %d:\n", i + 1);
		scanf_s("%d", &grades[i]);
	}

	calcStuAvg(grades, size);


	// This automatically finds size of array using 
	int sizeofArray = sizeof(grades) / sizeof(grades[0]);
	//printf("Size of your array is %i", sizeofArray);


	// This sorts the Array from small to big values 
	//sortArray(grades, sizeofArray);

	//printArrayGen(grades, sizeofArray);

	dropLowest(grades, sizeofArray);

	dropNLowest(grades, sizeofArray);

	calcStuAvg(dropLowest(grades, size), size);

	calcStuAvg(dropNLowest(grades, size), size);


	//-------END OF QUESTION 1------------------------------//




	// --------Q2: Crazy Alphabet Song--------------- [X]
	char start;
	printf("Enter the letter to start with");
	scanf_s(" %c", &start);

	char end;
	printf("Enter the letter to end with");
	scanf_s(" %c", &end);


	alphabetSoup(start, end);

	printf("\nThe number of letters in between is: %i", alphabetSoup(start, end));

	//-------------END OF Q2----------------------------------------------------\\


// ---------- Q3 Char Array Replace-All ----------

	char listOfLetters[8] = "aabbccd";

	char replace;


	printf("This is the original set of letters.\n");
	for (int i = 0; i < 8;i++) {
		printf("%c\n", listOfLetters[i]);

	}

	printf("\nWhat do you want to change: ");
	scanf_s(" %c", &replace);


	char new1;
	printf("\nWhat do you want to put as: ");
	scanf_s(" %c", &new1);


	printf("This is the altered array:");
	replaceAllCh(listOfLetters, 10, replace, new1);

	for (int i = 0; i < 8;i++) {
		printf("%c\n", listOfLetters[i]);

	}

	printf("\n The amount of replaced characters are %i", replaceAllCh(listOfLetters, 10, replace, new1));



	return 0;
}
