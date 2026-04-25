#include <stdio.h> 

int main() 
{   
    int num;
    int *ptr;

    printf("Enter an integer: ");  
    scanf("%d", &num);  

    ptr = &num;

    printf("Entered value; %d\n", num); 
    printf("Address: %p\n", (void*)&num);   
    printf("Value using pointer: %d\n", *ptr);
   
    return 0; 

}
