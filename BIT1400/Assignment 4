#include <stdio.h>

#include <math.h>

//Assignment 4 - Auth0r Sanat Boodoo

//Global Constant
double myPi = 3.14159;


// Area Functions x3

// CIRCLE AREA - 1 Input
double circleArea(int radius, double myPi) {

	double areaCircle = (radius*radius*myPi);
	return areaCircle;
}

// SQUARE AREA - 1 Input
double squareArea(int length) {

	int areaSqre = (length * length);
	return areaSqre;
}


//Volume Functions x 2


// CYLINDER VOLUME -  using circle area and input height, 
double cylinderVol(double circleArea ,int height) {

	double volumeCyl = (circleArea * height);
	return volumeCyl;
}


// CUBE VOLUME - 1 Input (Length)
double cubeVol(int length) {

	double volumeCube = (length * length * length);
	return volumeCube;
}

// Absolute Value function

double myAbs(double origVal){

	double root = sqrt(-origVal * -origVal);
	return root;

}



int main() {


	// Variables defined
	int length;

	int height;

	int radius;

	int rootnum;

	// Storing value in variables as integers
	printf("\nEnter a value for length: ");
	scanf_s("%d", &length);

	printf("\nEnter a value for height:");
	scanf_s("%d", &height);

	printf("\nEnter a value for radius: ");
	scanf_s("%d", &radius);


	//Volume Calculations
	double VolCylinder = cylinderVol(circleArea(radius, myPi), height);
	printf("\nVolume of a cylinder is %f", VolCylinder);

	double VolCube = cubeVol(length * length * length);
	printf("\nVolume of a cube is %f", VolCube);


	// Area calculations

	double ArCircle = circleArea(radius, myPi);
	printf("\n\nArea of circle is %f\n", ArCircle);

	double ArSqre = squareArea(length);
	printf("Area of a square is %f\n", ArSqre);



	//////////////////////////////////////////////////////


	// Absolute Value

	//input a number for finding Absolute Value
	printf("\n\n\n\nGive me a number and I will return the absolute value of it: ");
	scanf_s("%i", &rootnum);

	double absol = myAbs(rootnum);
	printf("Square root when squared is %f", absol);



	//using abs(x) to test
	double absol1 = abs(rootnum);
	printf("\nabsolute value is: %f\n", absol1);

	return 0;
}


