#include <stdio.h>
void value_change_thirty_times(int*);
void value_change_thirty_times(int*a)
{
    *a = *a * 30;
}
int main(){
    int b = 20;
    printf("value of b before value change is :%d\n",b);
    value_change_thirty_times(&b);
    printf("value of b after value change is :%d",b);
    

    return 0;
}