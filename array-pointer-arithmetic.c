#include <stdio.h>
int main(){
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int* ptr = &arr[0];

    printf ("The Value Of Array At Index 0 is : %d\n ", *ptr);
    printf ("The Value Of Array At Index 1 is : %d\n", *(ptr + 1));
    printf ("The Value Of Array At Index 2 is : %d\n", *(ptr + 2));
    printf ("The Value Of Array At Index 3 is : %d\n", *(ptr + 3));
    printf ("The Value Of Array At Index 4 is : %d\n", *(ptr + 4));
    printf ("The Value Of Array At Index 5 is : %d\n", *(ptr + 5));
    printf ("The Value Of Array At Index 6 is : %d\n", *(ptr + 6));
    printf ("The Value Of Array At Index 7 is : %d\n", *(ptr + 7));
    printf ("The Value Of Array At Index 8 is : %d\n", *(ptr + 8));
    printf ("The Value Of Array At Index 9 is : %d\n", *(ptr + 9));
    return 0;
}