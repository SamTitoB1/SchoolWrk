#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

//using namespace std;

// Assignment 2B - Sanat Boodoo




int removeComments(std::string& str) {
    int count = 0;
    size_t start = str.find("/*");
    while (start != std::string::npos) {
        size_t end = str.find("*/", start + 2);
        if (end == std::string::npos) {
            break;
        }
        str.erase(start, end - start + 2);
        count += end - start + 2;
        start = str.find("/*");
    }
    start = str.find("//");
    while (start != std::string::npos) {
        size_t end = str.find("\n", start);
        if (end == std::string::npos) {
            end = str.length();
        }
        str.erase(start, end - start);
        count += end - start;
        start = str.find("//");
    }
    std::cout << str;
    return count;
}




int removeSubstring(std::string& str, int start, int end) {
    int len = str.length();
    str.erase(start, end - start + 1);
    return len - str.length();
}

int removeCommentsCPP(std::string& str) {
    int count = 0;
    int start = str.find("/*");
    while (start != std::string::npos) {
        int end = str.find("*/", start + 2);
        if (end == std::string::npos) {
            break;
        }
        count += removeSubstring(str, start, end + 1);
        start = str.find("/*", end);
    }
    start = str.find("//");
    while (start != std::string::npos) {
        int end = str.find("\n", start + 2);
        count += removeSubstring(str, start, end);
        start = str.find("//", end);
    }
    return count;
}



int main() {

	std::fstream myFile;
	std::string lines;
    std::string text;
	myFile.open("Text.txt", std::ios::in); // Read mode

	// Error checker for file opening.
	if (myFile.fail() || myFile.bad()) {
		std::cout << "Error opening File.";
	}


	if (myFile.is_open()) {
		
		while (getline(myFile,lines)) { // Gets each line and saves into line until no more lines
			
			// Saves each line plus the line before with a '\n'

            text += lines + '\n';
            // Tester\/
			//std::cout << text << std::endl;
		}

	}

	//rewind(myFile);
	myFile.close(); // Close the file

	
   // int count = removeCommentsCPP(text);
   // std::cout << "Characters removed: " << count << std::endl;
   // std::cout << "Revised text: \n" << text << std::endl;
	
    //Prints out in function
    int count = removeComments(text);

	return 0;
}
