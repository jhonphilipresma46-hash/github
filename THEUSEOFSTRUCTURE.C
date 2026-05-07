#include <stdio.h>

// Structure for student record
struct Student {
    char name[50];
    int age;
    char section;
    float grade;
};

// Function to input student details
void getStudent(struct Student *s) {
    printf("Enter Name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter Age: ");
    scanf("%d", &s->age);

    printf("Enter Section: ");
    scanf(" %c", &s->section);

    printf("Enter Grade: ");
    scanf("%f", &s->grade);
}

// Function to display student details
void showStudent(struct Student s) {
    printf("\nStudent Information\n");
    printf("-------------------\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Section: %c\n", s.section);
    printf("Grade: %.2f\n", s.grade);
}

int main() {            //jhonphilipresma


    // Declare structure variables
    struct Student student1, student2;

    printf("===Student 1===\n");
    getStudent(&student1);

    printf("\n\n===Student 2===\n");
    getStudent(&student2);

    // Display output
    printf("\n=== Records ===\n");

    showStudent(student1);
    showStudent(student2);

    return 0;
}