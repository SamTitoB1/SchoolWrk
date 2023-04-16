#pragma once
#include <iostream>
#include <string>
using namespace std;
class CCourse {
private:
    std::string name1;
    unsigned int enroll;
    double avg;

public:
    // Constructor
    CCourse();
    CCourse(string name,int maxEnrollment, double average) {
       name1 = name;
        enroll =maxEnrollment;
       avg = average;
    }

    // Getter and setter for name
    std::string getName() const {
        return name1;
    }

    void setName(const std::string& newName) {
        name1 = newName;
    }

    // Getter and setter for maxEnrollment
    unsigned int getMaxEnrollment() const {
        return enroll;
    }

    void setMaxEnrollment(unsigned int newMaxEnrollment) {
        if (newMaxEnrollment >= 0) {
            enroll = newMaxEnrollment;
        }
        else {
            std::cout << "Error: maxEnrollment cannot be negative.\n";
        }
    }

    // Getter and setter for average
    double getAverage() const {
        return avg;
    }

    void setAverage(double newAverage) {
        if (newAverage >= 0) {
            avg = newAverage;
        }
        else {
            std::cout << "Error: average cannot be negative.\n";
        }
    }

    // Print course information
    void printCourseInfo() {
        std::cout << "Course Information:\n";
        std::cout << "Name: " << *&name1  << "\n";
        std::cout  << "Max Enrollment: " << *&enroll  << "\n";
        std::cout << "Average: " << *&avg  << "\n";
        
        difficulty();
        std::cout << "\n";
    }

    // Check if course is large
    void difficulty()
        /*
            This function takes the class average and determines
            if the course is considered difficult or easy
            Simply using a range scale of the averages we define
            the level of difficulty.
        */
    {

        if (avg >= 80) {
            cout << "This course is regarded as: Easy." << endl;
        }
        else if (avg <= 79 <= 69) {
            cout << "This course is regarded as: Normal." << endl;
        }
        else if (avg <= 68 <= 60) {
            cout << "This course is regarded as: Hard." << endl;
        }
        else if (avg < 60) {
            cout << "This course is regarded as: Difficult." << endl;
        }
    }

};
