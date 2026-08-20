#include <stdio.h>
void display ( int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int dataInsertion(int arr[], int size, int capacity, int element, int index){
    if (size >= capacity){
        printf("Data Insertion Not Possible.");
        return 0 ;
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i+1] = arr[i];

    }
    arr[index] = element;
    return 1; 
    
}

int main(){
    int arr[100] = {1,2,3,4,6};
    int size = 5, capacity = 100, element = 5, index = 4;
    display(arr,size);
    if(dataInsertion( arr, size, capacity, element, index))
    {
        size++;
    }
    display(arr,size);
    
    return 0;
}