#include <stdio.h>
// #include <conio.h>
#include <math.h>
float f(float);
void main()
{
    float a, b, eps, c;
    // clrscr();
    printf("Enter value of a=");
    scanf("%f", &a);
    printf("Enter value of b=");
    scanf("%f", &b);
    printf("Enter value of eps=");
    scanf("%f", &eps);
    c = (a * f(b) - b * f(a)) / (f(b) - f(a));
    while (fabs(f(c)) > eps)
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        if (f(c) * f(b) > 0)
            b = c;
        else
            a = c;
    }
    printf("Root is=%f", c);
    // getch();
}

float f(float x)
{
    float y;
    y = (pow(x, 3) + 7 * pow(x, 2) + 9);
    // y=(pow(x,3)+2*x-2);
    return (y);
}
