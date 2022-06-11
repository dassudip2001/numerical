#include <stdio.h>
// #include<conio.h>
#include <math.h>
float f(float);
float df(float);
void main()
{
    float x0, x1, eps;
    //   clrscr();
    printf("Enter value of eps=");
    scanf("%f", &eps);
    printf("Enter value of initial gass=");
    scanf("%f", &x0);
    x1 = x0 - (f(x0) / df(x0));
    while (fabs(f(x1)) > eps)
    {
        x1 = x0 - (f(x0) / df(x0));
        x0 = x1;
    }
    printf("Root is=%f", x1);
    //  getch();
}

float f(float x)
{
    float y;
    y = (pow(x, 3) - 8 * x - 4);
    return (y);
}

float df(float z)
{
    float d;
    d = (3 * pow(z, 2) - 8);
    return (d);
}
