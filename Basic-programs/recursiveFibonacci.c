// Write an recursive algorithm to return n Fibonacci number.

#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n, int a, int b) {
    if (n == 0) {
        return; 
    }
    printf("%d\t", a); 
    fibonacci(n - 1, b, a + b);  
}

int main() {
    int n, a = 0, b = 1;

    printf("How many terms you want: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number...\n");
        exit(1);
    }

    fibonacci(n, a, b); 
    return 0;
}



