#include <stdio.h>

typedef struct {
  char name[50];
  int age;
  int section;
} student; 


int main (){
student student;

printf("Enter your name: ");
scanf("%s", student.name);

printf("Enter your age: ");
scanf("%d", &student.age);

printf("Enter your section: ");
scanf("%d", &student.section);

printf("\nStudent Information\n");
printf("\nName: %s", student.name);
printf("\nAge: %d", student.age);
printf("\nSection: %d", student.section);  


return 0;



}