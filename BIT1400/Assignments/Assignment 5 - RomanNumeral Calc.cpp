

#include <stdio.h>
#include <assert.h>


// Assignment 5 - Auth0r Sanat Boodoo BIT 1400 LEC



int simpleRound(double num1) {

	//Ternary Operator using math to find rounded number, 

	// is num1 positive if yes add 0.5 to it and return it back as int
	//if not multiply by neg to become pos, then add 0.5 and multiply back to neg

	int num2 = (num1 > 0) ? double(num1 + 0.5) : (double((num1 * -1) + 0.5) * -1);

	 //int num2 = double(num1+0.5);

	return num2;

}




int isExactChange(unsigned int pennyPrice){


	// Using again a ternary Operator for a simple true or false (0,1) output
	int change = (pennyPrice % 5 == 0) ? true : false;
	//modified for a print statement instead
	(pennyPrice % 5 == 0) ? printf("\nYou can use Coins to make this purchase!") : printf("\nYou may need to use debit or credit for this purchase!");

	return change;

}




const char* superBowlConvertSmall(unsigned int sbNum) {

	switch (sbNum) {
	case 1:
		return "I";
		break;
	case 2:
		return "II";
		break;
	case 3:
		return "III";
		break;
	case 4:
		return "IV";
		break;
	case 5:
		return "V";
		break;
	case 6:
		return "VI";
		break;
	case 7:
		return "VII";
		break;
	case 8:
		return "VIII";
		break;
	case 9:
		return "IX";
		break;
	default:
		return " ";
		break;

	}


}



const char* superBowlConvertLarge(unsigned int sbNum) {

	switch (sbNum) {
	case 10:
		return "X";
		break;
	case 20:
		return "XX";
		break;
	case 30:
		return "XXX";
		break;
	case 40:
		return "XL";
		break;
	case 50:
		return "L";
		break;
	case 60:
		return "LX";
		break;
	case 70:
		return "LXX";
		break;
	case 80:
		return "LXXX";
		break;
	case 90:
		return "XC";
		break;
	default:
		return " ";
		break;

	}


}




void superBowlPrinter(unsigned int sbNum) {


	// if number input is zero or more than 100 return nothing.
	if (sbNum == 0 || sbNum > 100) {

		return;
	}

	//calling functions sbconvertlarge and small

	const char* sbSmall = superBowlConvertSmall(sbNum % 10);
	const char* sbLarge = superBowlConvertLarge(sbNum - (sbNum % 10));

	printf("Super Bowl %i, is %s%s\n", sbNum, sbLarge, sbSmall);

	return;
}






int main() {


	//Simple Round Variables and Output
	double num1;
	printf("Give me a number positive or negative and I will round it up or down: ");
	scanf_s("%lf", &num1);
	int num3 = simpleRound(num1);
	printf("Rounded is %i\n\n", num3);


	//Checking to see the outputs are correct and functioning as wanted.
	assert(simpleRound(2.5) == 3);
	assert(simpleRound(99.2) == 99);
	assert(simpleRound(-4.2) == -4);




	//Verifying the Function IsExact Change


	//assert(isExactChange(523)==0);
	//assert(isExactChange(520)==1);


	int pennyNum;
	printf("Input a number in the price format of pennies: ");
	scanf_s("%i", &pennyNum);
	isExactChange(pennyNum);





	// SuperBowl Calc

	int superBowl;
	printf("\n\nEnter a positive number from 1-99 and I will calculate the SuperBowl Equivalent: ");
	scanf_s("%i", &superBowl);
	superBowlPrinter(superBowl);


	return 0;
}
