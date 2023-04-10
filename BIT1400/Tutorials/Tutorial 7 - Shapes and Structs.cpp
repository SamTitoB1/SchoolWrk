#include <stdio.h>


struct student {

	int id;
	double grades;
	int numCoffee;
};


struct myPoint {

	int x;
	int y;


};


struct RGBColour {

	char red;
	char green;
	char blue;

};



struct triangle {

	myPoint p1;
	myPoint p2;
	myPoint p3;
	RGBColour colour1;
};


struct polygon {

	int p;
	int i;

};


int createPolygon(int sides, myPoint polygon) {
	
	myPoint polygon;

	for (int i = 0; i < sides; i++) {


		printf("\n\nEnter %i coord for x: ", i);
		scanf_s("%i", &polygon.x);

		printf("\n\nEnter %i coord for y: ", i);
		scanf_s("%i", &polygon.y);

		struct myPoint polygon[20] = {

			polygon[i] = {polygon.x,polygon.y}

		};
	}
	
	




	return 0;
}





int calcArea(struct myRect rect){

	myRect rect;

	int length = (rect.r1.x - rect.r2.x);
	int width = (rect.r1.y - rect.r2.y);

	int area = (length * width);

	


	return area;
}

struct myRect {

	myPoint r1;
	myPoint r2;
	RGBColour rColour;

};


int main() {

	triangle Tri1;

	Tri1.p1.x = 3;
	Tri1.p1.y = 4;

	Tri1.p2.x = 5;
	Tri1.p2.y = 6;

	Tri1.p3.x = 7;
	Tri1.p3.y = 8;

	Tri1.colour1.blue = 'a';
	Tri1.colour1.green = 'f';
	Tri1.colour1.red = 'e';



	printf("My triangle has:\n\n");
	printf("1. Coords: %i,%i", Tri1.p1.x, Tri1.p1.y);
	printf("\n2. Coords: %i,%i", Tri1.p2.x, Tri1.p2.y);
	printf("\n3. Coords: %i,%i", Tri1.p3.x, Tri1.p3.y);
	printf("\nHas a colour scheme of %c%c%c.", Tri1.colour1.blue, Tri1.colour1.green, Tri1.colour1.red);
	
//---------------------------------------------------------------------------------------------------------

	myRect R1;

	printf("Enter values for Rectangle Coords: ");

	printf("1st Set: ");
	scanf_s("%i", &R1.r1.x);
	scanf_s("%i", &R1.r1.y);

	printf("2nd Set: ");
	scanf_s("%i", &R1.r2.x);
	scanf_s("%i", &R1.r2.y);

	int length = (R1.r2.x - R1.r1.x);
	int height = (R1.r2.y - R1.r1.y);


	//printf("");
	//scanf_s("%i", &R1.rColour.blue);


	printf("Area of rect is %i", calcArea(R1));
	//calcArea(R1);
	











	//---------------------------------------------------------------------
	


	createPolygon(1,R1);

	//printf("%i,%i", createPolygon(1), createPolygon(1));

	return 0;
}
