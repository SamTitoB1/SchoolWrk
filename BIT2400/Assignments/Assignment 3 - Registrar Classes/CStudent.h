#pragma once
#include "CCourse.h"
#include <iostream>
#include <string>

using namespace std;

class CStudent {
private:
    std::string name1;
    unsigned int idnum;
    CCourse* p_course;

public:
    // Constructor
    CStudent();
    CStudent(string name, int id) {
        name1 = name;
        idnum = id;
        p_course = nullptr;
    }

    // Getter and setter for name
    std::string getName() const {
        return name1;
    }

    void setName(const std::string& newName) {
        name1 = newName;
    }

    // Getter and setter for id
    unsigned int getId() const {
        return idnum;
    }

    void setId(unsigned int newId) {
        idnum = newId;
    }

    // Getter and setter for p_course
    CCourse* getCourse() const {
        return p_course;
    }

    void setCourse(CCourse* newCourse) {
        p_course = newCourse;
    }

    // Print student information
    void printStudentInfo()  {
        std::cout <<  "Student Information:\n";
        std::cout <<"Name: " << *&name1 <<   "\n";
        std::cout << "ID: " << *&idnum << "\n";
        if (p_course != nullptr) {
            std::cout  << "Course taking: " << p_course->getName()  << "\n";
            std::cout << "\n" << "\n";
        }
        else {
            std::cout<< "Course taking: None" << "\n";
        }
    }

    // Check if student is taking a particular course
    bool isTakingCourse(const CCourse& course) const {
        return p_course == &course;
    }

    // Get student's first name
    std::string getFirstName() const {
        std::string firstName = "";
        for (char c : name1) {
            if (c == ' ') {
                break;
            }
            firstName += c;
        }
        return firstName;
    }
};
