#pragma once
#include <iostream>
#include <string>
#include "CCourse.h"
#include "CStudent.h"

using namespace std;

class CRegistrar {
private:
    unsigned int maxNumCourses;
    unsigned int maxNumStudents;
    unsigned int numCourses;
    unsigned int numStudents;
    CCourse** courses;
    CStudent** students;

public:
    CRegistrar();
    CRegistrar(unsigned int maxCourses, unsigned int maxStudents)
        : maxNumCourses(maxCourses), maxNumStudents(maxStudents), numCourses(0), numStudents(0), courses(new CCourse* [maxCourses]), students(new CStudent* [maxStudents])
    {
        for (unsigned int i = 0; i < maxCourses; i++) {
            courses[i] = nullptr;
        }

        for (unsigned int i = 0; i < maxStudents; i++) {
            students[i] = nullptr;
        }
    }

    // Deconstructor

    ~CRegistrar()
    {
        for (unsigned int i = 0; i < numCourses; i++) {
            delete courses[i];
        }

        for (unsigned int i = 0; i < numStudents; i++) {
            delete students[i];
        }

        delete[] courses;
        delete[] students;
    }

    void addStudent(CStudent* student)
    {
        if (numStudents < maxNumStudents) {
            students[numStudents] = student;
            numStudents++;
        }
        else {
            cout << "Error: Maximum number of students has been reached." << endl;
        }
    }

    void addCourse(CCourse* course)
    {
        if (numCourses < maxNumCourses) {
            courses[numCourses] = course;
            numCourses++;
        }
        else {
            cout << "Error: Maximum number of courses has been reached." << endl;
        }
    }

    CStudent* getStudent(unsigned int id)
    {
        for (unsigned int i = 0; i < numStudents; i++) {
            if (students[i]->getId() == id) {
                return students[i];
            }
        }

        return nullptr;
    }

    CStudent* getStudent(string studentName)
    {
        for (unsigned int i = 0; i < numStudents; i++) {
            if (students[i]->getName() == studentName) {
                return students[i];
            }
        }

        return nullptr;
    }

    CCourse* getCourse(string courseName)
    {
        for (unsigned int i = 0; i < numCourses; i++) {
            if (courses[i]->getName() == courseName) {
                return courses[i];
            }
        }

        return nullptr;
    }

    unsigned int getNumCourses() const
    {
        return numCourses;
    }

    unsigned int getNumStudents() const
    {
        return numStudents;
    }

    unsigned int getNumRegistered(CCourse* course)
    {
        unsigned int numRegistered = 0;

        for (unsigned int i = 0; i < numStudents; i++) {
            if (students[i]->getCourse() == course) {
                numRegistered++;
            }
        }

        return numRegistered;
    }

    void printRegistrarInfo()
    {
        cout << "Number of courses: " << *&numCourses << endl;
        cout << "Number of students: " << *&numStudents << endl;

        cout << "Courses:" << endl;
        for (unsigned int i = 0; i < *&numCourses; i++) {
            courses[i]->printCourseInfo();
        }

        cout << "Students:" << endl;
        for (unsigned int i = 0; i < *&numStudents; i++) {
            students[i]->printStudentInfo();
        }
    }

    //Deconstructor
   
};
