#include <stdio.h>

int main()

{ FILE *fp;
    char name[50];
    char coursensection[50];
    int age; 

    sprintf(name, "Jhon Philip L. Resma");
    age = 19;
    sprintf(coursensection, "DIT 1-1");
    
    fp = fopen("Jhon_Philip.txt", "w"); 
    
    //fprintf(fp, "%s %d %s %s", name, age, program, section);

    fgets(name, sizeof(name), fp);
    fscanf(fp, "%d", &age);
    fgets(coursensection, sizeof(coursensection), fp);
    

    fclose(fp);

     fp = fopen("Jhon_Philip.txt", "r"); 
     fscanf(fp, "%s %d %s %s", name, &age, coursensection);

     printf("Name: %s\n", name);   
     printf("Age: %d\n", age); 
     printf("Course and Section: %s\n", coursensection);
     
     fclose(fp);

     return 0;

}