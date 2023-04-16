#include <stdio.h>
#include <string.h>
#include <iostream>




#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)




/*/

char* strremove(char* str, const char* sub) {
	size_t len = strlen(sub);
	if (len > 0) {
		char* p = str;
		while ((p = strstr(p, sub)) != NULL) {
			memmove(p, p + len, strlen(p + len) + 1);
		}
	}
	return str;
}

*/




int main() {

	char outputText[300];
	
	

	

	FILE* fileptr = fopen("TextFile.txt", "r");

	if (ferror(fileptr) || fileptr == NULL) {
		printf("\nError in opening text file.");
		return 1;

	}
	


	int counter = 0;

	while(!feof(fileptr) && !ferror(fileptr)) {
		
		*outputText = fgetc(fileptr);
		counter++;

	}

	rewind(fileptr);



	int in_block_comment = 0;
	int line_comment = 0;
	int c;
	char garbage[2000];

	while ((c = fgetc(fileptr)) != EOF) {
		if (in_block_comment == 1) {
			if (c == '*') {
				c = fgetc(fileptr);
				if (c == '/') {
					in_block_comment = 0;
				}
				else {
					ungetc(c, fileptr);
				}
			}
		}
		else {
			if (c == '/') {
				c = fgetc(fileptr);
				if (c == '*') {
					in_block_comment = 1;
				}
				else {

					//Since we dont count the backslash for the block comment, the algorithm also removes a backslash for a normal 1 line comment

					printf("/%c", c);
				}
			}
			else {
				printf("%c", c);
			}
		}


		
		


	}





	fclose(fileptr);

	printf("There are %d chars in the file.\n", counter);
	
	
	
	


	




	return 0;
}
