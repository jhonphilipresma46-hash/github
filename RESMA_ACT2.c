#include <stdio.h>

int main()
{  int num[5];
    int *ptr;
    int sum = 0;

    ptr = num;

    printf("---Enter 5 numbers--- \n");
  
for (int i = 0; i < 5; i++) {
printf("Enter a number %d: ", i + 1);
scanf("%d", ptr + i);
}

printf("\nElements: \n");


for (int i = 0; i < 5; i++) {
printf("%d", *(ptr + i));
}

for (int i = 0; i < 5; i++) {
sum = sum + *(ptr + i);
}

print("\nThe sum of all numbers is = ")
printf("%d", sum);


return 0;
}