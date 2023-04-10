#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)


void writingisFun() {

	FILE* filepoint;

	filepoint = fopen("winterSport.txt", "w");

	//fget();

	char sport[100];

	printf("Enter a sport that u like: ");
	scanf("%s\0", &sport);

	//fputs()

	fprintf(filepoint, "My favourite sport in winter is: %s", sport);

	// Pulls info from file
	fscanf(filepoint, "%s", sport);


	fclose(filepoint);

}


void readingisFun() {

    char buffer[200];
    FILE* filepoint;


    filepoint = fopen("drinks.txt", "r");

    //While it isnt end of file keep printing the strings line by line till EOF
    while (!feof(filepoint)) {

        fscanf(filepoint, "%s", buffer);
        printf("%s\n", buffer);
        //printf("Using fscanf to convert word into c string: %s", buffer);

        /*
        fgets(buffer, 200,filepoint);
        printf("\nUsing fgets to get first 20 chars from filepoint: %s", buffer);
        */
    }


    fclose(filepoint);

}




void multipleInput(){
    

    FILE* f_ptr = NULL, * f_ptr2 = NULL;

    int totalNum = 0, num, doubnum;

    f_ptr = fopen("numbersInput.txt", "r");

    if (!f_ptr) {
        printf("Error in opening file");
        exit(1);
    }

    f_ptr2 = fopen("numbersOutput.txt", "w");
    if (!f_ptr2) {
        printf("Error in opening file");
        exit(1);    
    
    }


    while (fscanf(f_ptr, "%i", &num) != EOF ) {
        doubnum = num * 2;
        totalNum += doubnum;
        fprintf(f_ptr2, "%i\n", doubnum);
    
    }

    fprintf(f_ptr2, "%i", totalNum);

    fclose(f_ptr);
    fclose(f_ptr2);


}

int main() {

    readingisFun();

	writingisFun();

    multipleInput();

	return 0;
}
