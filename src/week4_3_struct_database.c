/*
 * week4_3_struct_database.c
 * Author: [Your Name]
 * Student ID: [Your ID]
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Students will use malloc to allocate space for multiple Student records,
 *   then input, display, and possibly search the data.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Define struct Student with fields name, id, grade
struct Student {
    char name[50]; 
    int id;
    float grade;
};
int main(void) {
    int n;
    struct Student *students = NULL;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        return 1;
    }
    students = (struct Student *)malloc(n * sizeof(struct Student));
    for (int i = 0; i < n; i++) {
        printf("\nEnter information for student number %d:\n", i + 1);
        printf("name: ");
        scanf("%s", students[i].name); 
        printf("id: ");
        scanf("%d", &students[i].id);
        printf("grade: ");
        scanf("%f", &students[i].grade);
    }
    printf("Here are informations about the students= \n ");
    for (int i = 0; i < n; i++) {
        printf("%d) Name: %s | ID: %d | Grade: %.2f\n",
               i + 1, students[i].name, students[i].id, students[i].grade);
    }
    double sum=0.0;
    for (int i = 0; i < n; i++) {
        sum+=students[i].grade;
    }
    int top=1;
    for (int i = 0; i < n-1; i++) {
        if (students[i].grade<students[i+1].grade){
            top=i+1;
        }
    }
    sum/=n;
    printf("\nAverage grade: %.2f\n", sum / n);
    printf("Top student: %s (ID: %d) with grade %.2f\n",students[top].name, students[top].id, students[top].grade);
    free(students);
    // TODO: Allocate memory for n Student structs using malloc

    // TODO: Read student data in a loop

    // TODO: Display all student records in formatted output

    // Optional: Compute average grade or find top student

    // TODO: Free allocated memory

    return 0;
}
