// Algorithm for recursive function for sum

#include <stdio.h>

int recursiveSum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + recursiveSum(n - 1);
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int result = recursiveSum(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, result);

    return 0;
}
