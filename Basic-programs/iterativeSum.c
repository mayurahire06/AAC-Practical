// Algorithm for iterative function for sum.

#include <stdio.h>

int iterativeSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int result = iterativeSum(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, result);

    return 0;
}
