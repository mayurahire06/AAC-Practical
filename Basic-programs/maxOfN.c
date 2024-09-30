// Write an algorithm to find max of n numbers.

#include<stdio.h>

int main() {
    int n, max, num;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    max = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        
        if(num > max){
            max = num;
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
