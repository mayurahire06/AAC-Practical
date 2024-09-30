// Write an algorithm to print odd numbers between 11 to 30 in reverse order.

#include<stdio.h>

int main(){
    for(int n = 29; n >= 11; n-=2)
        printf("%d\n", n);
    return 0;
}
