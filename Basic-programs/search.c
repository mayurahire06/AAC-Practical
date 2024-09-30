// Write a program to search an element in a given list

#include<stdio.h>

int search(int arr[], int size, int key){
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main(){
    int n, key, result;
    int arr[10];
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    result = search(arr, n, key);
    
    if(result != -1) {
        printf("Element found at index %d\n", result);
    }else{
        printf("Element not found\n");
    }

    return 0;
}
