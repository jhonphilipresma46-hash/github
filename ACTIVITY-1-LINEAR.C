#include <stdio.h>

int main() {
    int arr[50];
    int i, num;
    int found = 0;

    
    for(i = 0; i < 50; i++) {
        arr[i] = i + 1;
    }

    printf("Enter a number to search: ");
    scanf("%d", &num);

    
    for(i = 0; i < 50; i++) {
        if(arr[i] == num) {
            printf("Number found at index: %d\n", i);
            found = 1;
            break;
        }
    }

    
    if(found == 0) {
        printf("Number not found in the array.\n");
    }

    return 0;
}