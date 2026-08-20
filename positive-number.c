#include <stdio.h>
int positiveNumber(int arr[], int n)
{
    int positiveNumberCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positiveNumberCount++;
        }
    }
    return positiveNumberCount;
}

int main()
{
    int arr[10] = {1, 2, -3, 4, 5, -6, 7, 8, -9, 10};
    printf ("Number Of Positive Interger In Array Is : %d",positiveNumber(arr,10));
    return 0;
}