#include <stdio.h>
int main()
{
    float income, tax = 0;
    printf("enter your salary:");
    scanf("%f", &income);
    if (income < 250000)
    {
        printf("No income tax needed");
    }
    else if (income >= 250000 && income < 500000)
    {
        tax = 0.05 * (income - 250000);
        printf("Your Amount is %.2f\n", income);
        printf("Income Tax = %.2f\n", tax);
    }
    else if (income >= 500000 && income < 1000000)
    {

        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
        printf("Your Amount is %.2f\n", income);
        printf("Income Tax = %.2f\n", tax);
    }
    else
    {

        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
        printf("Your Amount is %.2f\n", income);
        printf("Income Tax = %.2f\n", tax);
    }

    return 0;
}