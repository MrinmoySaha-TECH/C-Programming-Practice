#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}
int main()
{
    int n;

    printf("Enter The Length Of Array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter The Value Of Array want To Reverse :\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printArray(arr, n);
    reverseArray(arr, n);
    printArray(arr, n);
    return 0;
}