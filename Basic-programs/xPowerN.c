#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, n;
    int power = 1; 

    printf("Enter the number: ");
    scanf("%d", &x);

    printf("Enter the power: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Enter a positive number...\n");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        power *= x;
    }

    printf("%d raised to the power of %d is: %d\n", x, n, power);
    return 0;
}
