#include <stdio.h>
//#include<conio.h>
#include <math.h>
float fun(float);
void main()
{
    float a, b, eps, mid;
    // clrscr();
    printf("Enter value of a=");
    scanf("%f", &a);
    printf("Enter value of b=");
    scanf("%f", &b);
    printf("Enter value of eps=");
    scanf("%f", &eps);
    mid = (a + b) / 2;
    while (fabs(fun(mid)) > eps)
    {
        if ((fun(a) * fun(mid)) > 0)
            a = mid;
        else
            b = mid;
        mid = (a + b) / 2;
    }
    printf("Integrated value=%f", mid);
    // getch();
}

float fun(float x)
{
    float y;
    y = ((x * x * x) - 4 * x + 1);
    // y=(pow(x,3)-2*x-3);
    return (y);
}
