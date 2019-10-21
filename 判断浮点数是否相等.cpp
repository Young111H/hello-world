#include <stdio.h>
#include <math.h>
int main()
{
    float m = 1.78;
    float x = 1.77999, y = 10000;
    float z = m * y, z1 = x * y;
    #define EPSILON 0.1
    if (fabs(z-z1)<EPSILON)
    printf("m=%f equal x=%f", m,x);
    else
    printf("m=%f  not equal x=%f", m,x);
    return 0;
}
