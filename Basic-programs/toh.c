//	Algorithm for TOH.

#include <stdio.h>

void TOH(int n, char src, char aux, char dest) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", src, dest);
        return;
    }

    // Move n-1 disks from src to aux using dest as aux
    TOH(n - 1, src, dest, aux);

    // Move the nth disk from src to dest
    printf("Move disk %d from %c to %c\n", n, src, dest);

    // Move the n-1 disks from aux to dest using src as aux
    TOH(n - 1, aux, src, dest);
}

int main() {
    int n;  // Number of disks

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the Tower of Hanoi function
    TOH(n, 'A', 'B', 'C');  // A is the src, B is the aux, and C is the dest

    return 0;
}
