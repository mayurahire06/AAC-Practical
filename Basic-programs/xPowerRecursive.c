// Write an algorithm to compute x^n using recursive method.

#include <stdio.h>
#include <stdlib.h>

int xPowerN(int x, int n){
    if(n == 0){
        return 1;  
    }
    return x * xPowerN(x, n - 1); 
}

int main(){
    int x, n;

    printf("Enter the number: ");
    scanf("%d", &x);

    printf("Enter the power: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Enter a positive number...\n");
        exit(1);
    }

    int result = xPowerN(x, n);
    printf("Answer is %d\n", result);
    return 0;
}

