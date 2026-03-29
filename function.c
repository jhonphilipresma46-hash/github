#include <stdio.h>

//1. create a function that prints a simple.
void printMessage() { 
    printf("1. Hello, I'm philip\n");

}
//2. Create a function that accepts two numbers.
   void add(int x, int y) 
   {

    int sum = x + y;
    printf("2. The sum is: %d\n", sum);
    
   }

//3. Create a function that takes a number 
  int square(int num) {
    return num * num;
 }
//4. Create a function that call itself 
 int factorial(int n){
 if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }


 }

int main() {
   
 //1. create a function that prints a simple.
    printMessage();
 //2. Create a function that accepts two numbers.
    add(9, 10);
 //3. Create a function that takes a number 
    int result = square(3);
    printf("3. The square is: %d\n", result); 
 //4. Create a function that call itself 
     int fact = factorial(7);
     printf("4. Factorial is: %d\n", fact);
    
    return 0;
}