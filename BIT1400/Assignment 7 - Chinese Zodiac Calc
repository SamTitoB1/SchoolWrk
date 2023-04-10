#include <stdio.h>

// Assignment 7 - Auth0r Sanat Boodoo






// Chinese Zodiac
// Lets say each year chinese new year is on feb 1st
// XXXX Feb 1 to Jan 31 XXXX + 1

// 





// Basis for any zodiac date parameters
struct zodiacDate {

// Birth Date for day month and year
	int day;
	int month;
	int year;
};



int zSign(zodiacDate person) {


	// ZODIAC ANIMAL LEGEND

	int rat = 0;
	int ox = 1;
	int tiger = 2;
	int rabbit = 3;
	int dragon = 4;
	int snake = 5;
	int horse = 6;
	int goat = 7;
	int monkey = 8;
	int rooster = 9;
	int dog = 10;
	int pig = 11;


	// Variable to save the number according to Animal Zodiac

	int element;


	


	// Mathematical Conversion

	// When we do the modular of each year, we get a constant remainder.
	// With the start of the year of the Rat being 1924, when we divide by 12 we have a remainder as 4
	// with the next year of the rat being 1936 it also has same remainder of 4

	// Each element 


	int checkYear = (person.year % 12);



	switch (checkYear) {


		// RAT
	case 4:
		if (person.month <= 1) {
			//printf("your a Pig");
			element = pig;
			break;
		}
		else
			//printf("You are a Rat");
			element = rat;
			break;


		// OX
	case 5:
		if (person.month <= 1) {
			//printf("your a Rat");
			element = rat;
			break;
		}
		else
			//printf("you are a Ox");
			element = ox;
			break;


		// TIGER
	case 6:
		if (person.month <= 1) {
			//printf("your a ox");
			element = ox;
			break;
		}
		else
			//printf("you are a Tiger");
			element = tiger;
			break;



		// RABBIT
	case 7:
		if (person.month <= 1) {
			//printf("your a ox");
			element = tiger;
			break;
		}
		else
			//printf("you are a Tiger");
			element = rabbit;
			break;




		// DRAGON
	case 8:
		if (person.month <= 1) {
			//printf("your a tiger");
			element = rabbit;
			break;
		}
		else
			//printf("you are a Dragon");
			element = dragon;
			break;

		// SNAKE
	case 9:
		if (person.month <= 1) {
			//printf("your a dragon");
			element = dragon;
			break;
		}
		else
			//printf("you are a Snake");
			element = snake;
			break;


		// HORSE
	case 10:
		if (person.month <= 1) {
			//printf("your a snake");
			element = snake;
			break;
		}
		else
			//printf("you are a Horse");
			element = horse;
			break;

		// GOAT
	case 11:
		if (person.month <= 1) {
			//printf("your a horse");
			element = horse;
			break;
		}
		else
			//printf("you are a Goat");
			element = goat;
			break;


		// MONKEY
	case 0:
		if (person.month <= 1) {
			//printf("your a goat");
			element = goat;
			break;
		}
		else
			//printf("you are a monkey");
			element = monkey;
			break;

		// ROOSTER
	case 1:
		if (person.month <= 1) {
			//printf("your a monkey");
			element = monkey;
			break;
		}
		else
			//printf("you are a rooster");
			element = rooster;
			break;

		// DOG
	case 2:
		if (person.month <= 1) {
			//printf("your a rooster");
			element = rooster;
			break;
		}
		else
			//printf("you are a dog");
			element = dog;
			break;

		//PIG
	case 3:
		if (person.month <= 1) {
			//printf("your a dog");
			element = dog;
			break;
		}
		else
			//printf("you are a pig");
			element = pig;
			break;
	}

//printf("\nThe year you were born is %i", person.year);

//printf("\nThe month you were born is %i", person.month);

//printf("\nThe day you were born is %i", person.day);

//printf("\n This makes you %i ", element);


// A SWITCH CASE STATEMENT FOR PRINTING OFF THE TYPE OF ANIMAL THEY ARE:


	// element = 0 - 11
	switch (element) {

	case 0:
		printf("\n*Squeak Squeak* RAT ");
		break;

	case 1:
		printf("\n*HUFF* OX");
		break;
	case 2:
		printf("\n*ROAR* TIGER");
		break;
	case 3:
		printf("\n*Nibble Nibble* RABBIT");
		break;
	case 4:
		printf("\n*GRRRR* DRAGON");
		break;
	case 5:
		printf("\n*Hiss Hiss* SNAKE");
		break;
	case 6:
		printf("\n*NEIGHHHH* HORSE");
		break;
	case 7:
		printf("\n*BAAA* GOAT");
		break;
	case 8:
		printf("\n*OOO AAA* MONKEY");
		break;
	case 9:
		printf("\n*COCK-A-DOODLE DO* ROOSTER ");
		break;
	case 10:
		printf("\n*WOOF WOOF* DOG");
		break;
	case 11:
		printf("\n*Oink Oink* PIG");
		break;
	}




return element;

	
}


int isCompatableZodiac(zodiacDate personA, zodiacDate personB) {
	

	// since zSign function returns a value of 0- 11 describing the animal, we will use int variables to save the returned functions

	int zodiacA;

	int zodiacB;

	zodiacA = zSign(personA);

	zodiacB = zSign(personB);


	// Calling a int var as flagger to return as a 0 or 1 for flagging if the combination is compatable
	int flagger = 0;

	
	
		// FOUR ANIMAL TRINES FORMULA

	// Like stated in the assignment, the animal trines are 4 numbers apart, a simple addition formula can be used to cover all trines
	
	
		if (zodiacA + 4 == zodiacB || zodiacA + 8 == zodiacB) {
			printf("\nThe stars have aligned in your favour! You 2 are compatable!");
			flagger = 1;
		}


		// For the chance of the 2 persons having same animal, they automatically are compatable

		else if (zodiacA == zodiacB) {
			printf("\nThe stars have aligned in your favour! You 2 are compatable!");
			flagger = 1;
		}
		

		// Any other combination, yields this
		else
			printf("\nUnfortunately you both arent destined to work out... ");
		//break;
		return 0;
		
	

	return flagger;


}



int main(){

	zodiacDate person1;


	printf("ZODIAC ANIMAL CALCULATOR");
	printf("--------------------------------------------------------------------");

	printf("\nIS YOUR FRIEND A FOE? FIND OUT BY PROVIDING YOUR BIRTHDAY AND THEIRS!!");


	// Enter the Birth Details for person 1
	printf("\n\n\nEnter the Year you were Born: ");
	
	scanf_s("%i", &person1.year);

	printf("\nEnter the Month between 1(Jan) and 12(Dec) you were Born: ");
	
	scanf_s("%i", &person1.month);
	
	

	printf("\nEnter the Day between 1st and 31st you were Born: ");
	
	scanf_s("%i", &person1.day);

	//------------------------------------------

	zodiacDate person2;

	// Enter the Birth Details for person 2

	

	printf("---------------------------------------------------------------------");
	printf("\nEnter 2nd Persons info");

	printf("\nEnter the Year you were Born: ");
	scanf_s("%i", &person2.year);

	printf("\nEnter the Month you were Born: ");
	scanf_s("%i", &person2.month);

	printf("\nEnter the Day you were Born: ");
	scanf_s("%i", &person2.day);
	

	//zSign(person1);

	printf("\n\nPERSON 1 :");
	zSign(person1);

	printf("\n\nPERSON 2 :");
	zSign(person2);

	isCompatableZodiac(person1, person2);


	return 0;
}
