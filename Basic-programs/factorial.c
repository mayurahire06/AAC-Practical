// Write a program to find a factorial of n numbers

#include<stdio.h>

int factorial(int n) {
    int result = 1;

    if(n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    
    for(int i = 2; i <= n; i++){
        result *= i;
    }

    return result;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}
