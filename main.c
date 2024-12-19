#include <stdio.h>

int main()
{
    const int x = -2;
    const int y = -3;


    float z1 = x*x*x+y*y+(x*y)+2;
    float z2 = (x-y)*(x-y)*(x-y)-3;
    float z3 = (2*(x*x*x)-0.5*(x*x)-x+4)/y;



        printf("z1 = %.6f\n", z1);
        printf("z2 = %.6f\n", z2);
        printf("z3 = %.6f\n", z3);
        return 0;
}