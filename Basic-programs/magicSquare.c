
#include<stdio.h>

void magicSquare(int n) {

    int arr[n][n], i, j;
    int nextRow, nextCol;

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) { 
            arr[i][j] = 0;
        }
    }

    i = 0;
    j = n / 2;

    for (int num = 1; num <= n * n; num++) {
        arr[i][j] = num;

        nextRow = (i - 1 + n) % n;
        nextCol = (j - 1 + n) % n;

        if (arr[nextRow][nextCol] != 0) {
            i = (i + 1) % n;
        } 
        else {
            i = nextRow;
            j = nextCol;
        }
    }
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) { 
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int n;
    printf("Enter odd no: ");
    scanf("%d", &n);

    if (n % 2 == 1)
        magicSquare(n);
    else
        printf("Only Odd Numbers!!!");
}

    
    
