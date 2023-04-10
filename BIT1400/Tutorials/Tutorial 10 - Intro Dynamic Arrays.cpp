#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>


#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)



/*

const int MAX_NAME_LEN = 50;

struct student
{
char name[MAX_NAME_LEN];
//....................
};



// Passing in a student actually makes a copy of the structure
// thus the original is unchanged
void peasantEdit(student s);


// Passing in a pointer means you can edit the original structure
void ninjaEdit(student* s);



// Pass by reference means you edit the original structure...and thus this
// approach should be done with caution.
void ninjaEdit2(student& s);

*/


struct student {

	char* name[50];
	unsigned int id_num;
	unsigned int age;


};



void peaseantEdit(struct student s) {

	s.age = '99';
	s.id_num = '99';
	s.name;

	//strcpy(*s.name,"NinetyNine");


}

void ninjaEdit(student* ps) {

	ps->id_num = 1234;
	ps->age = 10;

	
}




int main() {




	// TASK 1 Size Of Arrays:

	int a_staticNums[50] = {1,1,1,1,1 }; //5 numbers

	int size1 = sizeof(a_staticNums);
	printf("size1: %i\n", size1);
	// Has a size of 200 even when I remove some numbers from the array

	// Sizeof finds the size of bytes, since we can hold 50 values,
	//we have a size of 200 each int has byte size of 8

	char** a_dynChars[20];

	*a_dynChars == malloc(sizeof(a_dynChars));
	int size2 = sizeof(a_dynChars);
	//int size2 = sizeof(a_dynChars[0]);
	printf("\nsize2: %i", size2);

	char** a_dynNums[40];

	*a_dynNums == malloc(sizeof(a_dynNums));
	int size3 = sizeof(a_dynNums);
	//int size3 = sizeof(a_dynNums[0]);
	printf("size 3 %i\n", size3);


	printf("\n\n char sze: %i, and int sze: %i\n", sizeof(char*), sizeof(int*));

	//free(a_dynChars);
	//free(a_dynNums);
	//free(a_staticNums);








	//-------------------------------------------------------------


	struct student testStu;

	char* name[10];
	*name = (char*)malloc(2000);

	*testStu.name = name[10];
	testStu.id_num = 9292;
	testStu.age = 29;


	strcpy_s(*name, 20,"John");



	printf("\nId Badge %i", testStu.id_num);
	//printf("\nStudent Name: %s", testStu.name);
	printf("\nStudent Age: %i", testStu.age);
	

















	return 0;
}
