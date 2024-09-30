// Write an algorithm for finding factorial using recursive method.

#include<stdio.h>

int factorial(int n){
    int fact; 
    if(n == 0){
        return 1;
    }

    fact = n * factorial(n - 1);
    return fact;
}

int main(){
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0){
        printf("Enter positive integer: ");
        return 1;
    }
    result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}

