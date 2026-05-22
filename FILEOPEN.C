#include <stdio.h>

int main()

{ FILE *fp;
    char name[50];
    char program[50];
    char section[50];
    int age; 

    sprintf(name, "Jhon Philip L. Resma");
    age = 19;
    sprintf(program, "Diploma in Information Technology");
    sprintf(section, "1-1");

    fp = fopen("Jhon_Philip.txt", "w"); 
    
    //fprintf(fp, "%s %d %s %s", name, age, program, section);

    fgets(name, sizeof(name), fp);
    fscanf(fp, "%d", &age);
    fgets(program, sizeof(program), fp);
    fscanf(fp, "%s", section);


    fclose(fp);

     fp = fopen("Jhon_Philip.txt", "r"); 
     fscanf(fp, "%s %d %s %s", name, &age, program, section);

     printf("Name: %s\n", name);   
     printf("Age: %d\n", age); 
     printf("Program: %s\n", program);
     printf("Section: %s\n", section);

     fclose(fp);

     return 0;

}