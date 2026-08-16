#include <stdio.h>

int main(){
    int i = 3;
    int* j = &i;
    int** k = &j;
    printf("the adress of i is %u\n",&i);
    printf("the adress of j is %d\n",j);
    printf("the adress of k is %d\n",k);
    printf("the value of j is %d\n",*j);
    printf("the value of k is %d",**k);
    return 0;
}