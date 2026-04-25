#include <stdio.h>
#include <stdlib.h> 

int main()

{ 
  //1. Null pointer
    int *ptr1 = NULL; 
    printf("Null pointer:\n");
    printf("ptr = %p\n\n", ptr1);
  

  //2. Void pointer  
    int num = 10;
    void *prt2;
    prt2 = &num; 
    printf("Void pointer:\n");
    printf("Address stored in Void pointer = %p\n", prt2);
    printf("Value using void pointer: %d\n\n", *(int*)prt2);

  //3. Wild pointer  
    int *ptr3; 
    printf("Wild pointer:\n");
    printf("ptr = %p\n\n", ptr3);
  
  //4. Dangling pointer   
    int *ptr4;
    {
       int temp = 30;
       ptr4 = &temp;    
    }

       printf("Dangling pointer:\n");
         printf("ptr = %p\n",ptr4);

         return 0;










}