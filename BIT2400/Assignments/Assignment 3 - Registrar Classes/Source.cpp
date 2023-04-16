#include <iostream>
#include <string>

#include "CCourse.h"
#include "CStudent.h"
#include "CRegistrar.h"

using namespace std;



int main() {
    // Create a registrar with maximum storage for 10 courses and 20 students
    CRegistrar registrar(10, 20);

    // Create a few courses
    CCourse* course1 = new CCourse("Calculus", 50,78.1);
    CCourse* course2 = new CCourse("Physics", 40,91.9);

    // Add the courses to the registrar
    registrar.addCourse(*&course1);
    registrar.addCourse(*&course2);

    // Create a few students
    CStudent* student1 = new CStudent("Mehdi Niknam", 2341341);
    CStudent* student2 = new CStudent("Bob Junior", 237843);
    CStudent* student3 = new CStudent("Sanat Boodoo", 32182);

    // Add the students to the registrar
    registrar.addStudent(*&student1);
    registrar.addStudent(*&student2);
    registrar.addStudent(*&student3);

    // Assign students to courses
    student1->setCourse(*&course1);
    student2->setCourse(*&course2);
    student3->setCourse(*&course1);

 
   
    // Print information about the registrar
    registrar.printRegistrarInfo();
   


    // Get information about a specific student and course
    CStudent* student = registrar.getStudent(2);
    if (student != NULL) {
        student->printStudentInfo();
    }

    CCourse* course = registrar.getCourse("Calculus");
    if (course != NULL) {
        course->printCourseInfo();
    }

    // Get the number of students registered for a course
    unsigned int numRegistered = registrar.getNumRegistered(*&course1);
    cout << "Number of students registered for Calculus: " << numRegistered << endl;

    // Clean up memory
   // ~CRegistrar();
   

    return 0;
}

