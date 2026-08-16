#include <stdio.h>
int fibonacci (int);
int fibonacci (int n)
{
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n = 2;
    printf("The Value Of Fiboncci Series At %d is %d", n, fibonacci(n));
    return 0;
}
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
// fibonacci = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ....