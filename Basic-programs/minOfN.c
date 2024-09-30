//	Write an algorithm to find min of n numbers

#include<stdio.h>

int main(){
    int n, min, num;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    
    min = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        
        if(num < min){
            min = num;
        }
    }

    printf("The minimum number is: %d\n", min);

    return 0;
}
