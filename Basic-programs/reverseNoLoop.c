//	Write an algorithm to print odd numbers between 1 to 20 using repeat until loop

#include<stdio.h>

int main(){
    int n = 1;

    do{
        printf("%d\n", n);
        n += 2;
    }while (n <= 20);

    return 0;
}
