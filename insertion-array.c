#include <stdio.h>
void display ( int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void dataInsertion(int arr, int size, int capacity, int element, int index){
    if (size > capacity){
        printf("Data Insertion Not Possible.");
        return 0 ;
    }

    for (int i = size - 1; i >= size; i--)
    {
        arr[i+1] = arr[i];

    }
    arr[index] = element;
    return 1; 
    
}

int main(){
    int arr[100] = {1,2,3,4,6};
    int size = 5, capacity = 100, element = 5, index = 3;
    display(arr,size);
    dataInsertion( arr, size, capacity, element, index);
    display(arr,size);
    size += 1;
    return 0;
}