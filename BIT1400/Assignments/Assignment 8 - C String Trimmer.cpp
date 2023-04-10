#include <stdio.h>
#include <string.h>


// Assignment 8 - Auth0r Sanat Boodoo

// Takes a string of text, returns position of char in text

int strCharFind(char* txt, char toFind) {

	int i = 0;
	// Runs through until found char or end of text
	while (txt[i] != toFind && txt[i] != '\0') {

		i++;
		if (txt[i] == toFind) {
			// Print statement to indicate position of found
			// I will add 1 to it to accomodate for the 0 pos
			printf("\n\n The First Occurance of '%c' can be found at position %i", toFind, i + 1);
			break;
		}
		//If reaches null point, then the item cant be found.
		else if (txt[i] == '\0')
			printf("Sorry It cant be found!");
			
		
	}
	// Return position of the char in the Text
	return i;

}



// STRING FIND, FINDS THE INDEX OF Substring of the String and the positions
int stringSubFind(char* orig, char* toFind) {

	int i = 0;
	int j = 0;
	int firstOcc = strCharFind(orig, toFind[0]);


	
	// This loop goes through until at the Null pos
	while (orig[i] != '\0') {

		//This checks whole
		while (orig[i] != toFind[0] && orig[i] != '\0')
			i++;

		if (orig[i] == '\0')
			return (-1);

		firstOcc = i;

		while (orig[i] == toFind[j] && orig[i] != '\0' && toFind[j] != '\0') {
			i++;
			j++;
		}

		if (toFind[j] == '\0')
			return (firstOcc);
		if (orig[i] == '\0')
			return (-1);

		i = firstOcc + 1;
		j = 0;
	}
	
}

// Trim a word down to have no whitespace 

int grassTrim(char* orig, char* newText) {




	int count = 0;
	int i = 0;
	int k = 0;

	//char newText[20] = {""};

	// Uses the string length found with strlen of orig
	for (i = 0;i < strlen(orig);i++) {

		if (orig[i] >= 33 && orig[i] <= 126) {


			count++;


			//printf("%c", orig[i]);

			// Since counter adds 1, we use minus 1 to set the 0 pos as first so we dont have whitespace infront
			newText[count - 1] = orig[i];

		}

	}

	//printf("WhiteSpaces removed: %i", count);
	//printf("%i", count);
	printf("\n\nBefore %s\n", orig);
	printf("After '%s'", newText);
	printf("Now has length of %i", strlen(newText));

	return count;
}



int main() {

	//TASK 1 - STRCharFIND


	char Txt1[60] = "Here is some Sample TeXT so YoU Can try FINDING a c h Ar";
	//char newText3[20] = "\0";


	
	printf("I have some text here:\n\n");
	printf("%s", Txt1);



	//Input a char to find
	char find;
	printf("\nGive me a character to find: ");
	scanf_s(" %c", &find);



	strCharFind(Txt1, find);


	

	// TASK 2 FIND A STRING IN A STRING

	int finder;

	char original[] = "Hellooooo";
	char toFind[] = "llo";

	int find_size = strlen(toFind);

	finder = stringSubFind(original, toFind);

	printf("\nThe original is: %s", original);
	printf("\nWe will find: %s", toFind);

	// Using the return of the function the finder indicates the pos of the 
	if (finder == -1)
		printf("\nSorry Couldnt be found");
	else
		// Finder + 1 to accomodate for the 0 pos
		printf("\nFound at location %d and ends at %i", finder + 1, finder + find_size);
		





	// TASK 3 - IMPLEMENT TRIM
	


	//Has to have an initalized size as a maximum, or else error
	// The "" char is taken as a null to indicate \0 as end of string

	char Txt3[31] = "He  ll  oWor  ld ";
	char newText3[20] = "\0";

	grassTrim(Txt3, newText3);



	return 0;
}
