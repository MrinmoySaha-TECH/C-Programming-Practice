#include <stdio.h>

float forceOnBody(int);
float forceOnBody(int m)
{
    float f , g = 9.8 ;
    return f = m*g;
}

int main(){
    printf ("actual force of this body is %.2f", forceOnBody(34));
    return 0;
}