
#include <stdio.h>
#include <iostream>

// SANAT BOODOO ASSIGNMENT 1



struct student {
    char name[30];
    int id;
    char course[8];
};


struct course {
    char name[30];
    double Avg;
    int classSize;
};


struct registrar {
    struct student* students;
    int studentCount;
    struct course* courses;
    int courseCount;
};



// Freeing Memory 





int main() {
    // create registrar
    struct registrar registrar;
    registrar.studentCount = 0;
    registrar.courseCount = 0;

    // create dynamic array of students
    registrar.students = (struct student*)malloc(5 * sizeof(struct student));
    if (registrar.students == NULL) {
        printf("Error allocating memory for students.\n");
        return 1;
    }
    registrar.studentCount = 5;

    // create dynamic array of courses
    registrar.courses = (struct course*)malloc(4 * sizeof(struct course));
    if (registrar.courses == NULL) {
        printf("Error allocating memory for courses.\n");
        return 1;
    }
    registrar.courseCount = 4;

   

    course coursesTest[4] = {

         {"BIT2400",71.0,90},
         {"BIT1400",53.8,140},
         {"PHYS2003",78.9,200},
         {"CST8300", 98.9,10}

    };
    
    student nomialRoll[6] = {

       {"Sanat Boodoo",4464,"BIT1400"},
       {"Mehdi Niknam",0021,"BIT2400"},
       {"Joe Smith",8291,"NET1002"},
       {"Raymond Cho", 1111, "NET3200"},
       {"Cool Guy", 7777, "CMS1800"},
       {"X",0000,"XXXXXXX"},

    };


    for (int i = 0; i < registrar.courseCount;i++) {
       //strcpy(registrar.courses[i],coursesTest[i]);
        registrar.courses[i] = coursesTest[i];
    
    }

    for (int j = 0; j < registrar.studentCount;j++) {

        registrar.students[j] = nomialRoll[j];

    }

  






    // print contents of registrar
    printf("Registrar:\n");
    printf("Students:\n");
    for (int i = 0; i < registrar.studentCount; i++) {
        printf("ID: %d, Name: %s, Course Enrolled in: %s\n", registrar.students[i].id, registrar.students[i].name, registrar.students[i].course);
    }
    printf("Courses:\n");
    for (int i = 0; i < registrar.courseCount; i++) {
        printf("Average: %f, CourseID: %s, Capacity: %d\n", registrar.courses[i].Avg, registrar.courses[i].name, registrar.courses[i].classSize);
    }

    


    // Modify Course
    registrar.courses[1].classSize = 30;

    // Modify Student 
    registrar.students[1] = { "Sanat Kumar Boodoo",101264494,"BIT2400" };



    // 
    printf("\nRegistrar after modification:\n");
    printf("Students:\n");
    for (int i = 0; i < registrar.studentCount; i++) {
        printf("ID: %d, Name: %s, Course Enrolled in: %s\n", registrar.students[i].id, registrar.students[i].name, registrar.students[i].course);
    }
    printf("Courses:\n");
    for (int i = 0; i < registrar.courseCount; i++) {
        printf("Average: %f, CourseID: %s, Capacity: %d\n", registrar.courses[i].Avg, registrar.courses[i].name, registrar.courses[i].classSize);
    }
    



    // Freeing Memory of Registrars
    free(registrar.courses);
    free(registrar.students);

    //free(&registrar.courseCount);
    //free(&registrar.studentCount);


    return 0;
}
