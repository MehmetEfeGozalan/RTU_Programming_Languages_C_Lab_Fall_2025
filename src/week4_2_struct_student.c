/*
 * week4_2_struct_student.c
 * Author: [Mehmet Efe Gözalan]
 * Student ID: [250ADB111]
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Students should define a 'Student' struct with fields like name, id, and grade.
 *   Then create a few instances and print them.
 */

#include <stdio.h>
#include <string.h>
struct Student {
    char name[50]; 
    int id;
    float grade;
};
// TODO: Define struct Student with fields: name (char[]), id (int), grade (float)
// Example:
// struct Student {
//     char name[50];
//     int id;
//     float grade;
// };

int main(void) {
    struct Student S1;
    struct Student S2;
    strcpy(S1.name, "John");
    strcpy(S2.name, "Alex");
    S1.id=12345;
    S2.id=54321;
    S1.grade=5.5;
    S2.grade=7.5;
    printf("First students name is= %s their id is %d and their grade is %1f\n",S1.name,S1.id,S1.grade);
    printf("Second students name is= %s their id is %d and their grade is %1f\n",S2.name,S2.id,S2.grade);
    // TODO: Declare one or more Student variables

    // TODO: Assign values (either manually or via scanf)

    // TODO: Print struct contents using printf

    return 0;
}
