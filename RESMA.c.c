#include <stdio.h> 

 typedef struct {
 
  char name [100];
 }Name;

 typedef struct{
    char address[50];

 } Address;

 typedef struct {
 char course[50];

} Course;

int main() {

Name m;
Address c;
Course d;

printf("Enter student name: ");
scanf(" %[^\n]", m.name);

printf("Enter student address: ");
scanf(" %[^\n]", c.address);

printf("Enter student course: ");
scanf(" %[^\n]", d.course);

printf("\nStudent Information\n");
    printf("-------------------\n");
    printf("Name: %s\n", m.name);
    printf("Address: %d\n", c.address);
    printf("Course: %c\n", d.course);

    return 0;




}