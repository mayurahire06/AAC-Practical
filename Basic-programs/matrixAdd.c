// Write an algorithm addition of 2 matrices

#include<stdio.h>

int main(){
    int r, c;
    int A[5][5], B[5][5], sum[5][5];

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix A:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix B:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
