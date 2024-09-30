// Write an algorithm for multiplication of 2 matrices.

#include <stdio.h>

int main(){
    int r1, c1, r2, c2;
    int A[5][5], B[5][5], product[5][5];

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2){
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    printf("Enter elements of first matrix A:\n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix B:\n");
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            for(int k = 0; k < c1; k++){
                product[i][j] = A[i][k] * B[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
