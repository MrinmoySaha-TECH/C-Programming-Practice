#include <stdio.h>
int main(){
    int year;
    printf("Enter Your Preferred Year : ");
    scanf("%d",&year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("The Year Is A Leap Year.");
    } else
    {
        printf ("The Year Is Not A Leap Year.");
    }
    return 0;
}