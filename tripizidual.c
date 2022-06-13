/*Trapezoidal*/
#include <stdio.h>
// #include <conio.h>
#include <math.h>
float fun(float);
void main()
{
    int i, n;
    float a, b, h, x[20], y[20], Y0, Y1, I;
    // clrscr();
    printf("Enter lower limit a=");
    scanf("%f", &a);
    printf("Enter upper limit b=");
    scanf("%f", &b);
    printf("Enter no of intervel n=");
    scanf("%d", &n);
    h = (b - a) / n;
    Y0 = 0;
    Y1 = 0;
    printf("i        x[i]             y[i]");
    for (i = 0; i <= n; i++)
    {
        x[i] = a + i * h;
        y[i] = fun(x[i]);
        if ((i == 0) || (i == n))
        {
            printf("\n%d        %f        %f", i, x[i], y[i]);
            Y0 = Y0 + y[i];
        }
        else
        {
            printf("\n%d        %f        %f ", i, x[i], y[i]);
            Y1 = Y1 + y[i];
        }
    }
    I = (h / 2) * (Y0 + 2 * Y1);
    printf("\n\n Integrated value=%f", I);
    // getch();
}

float fun(float x)
{
    float y;
    y = (1 / (1 + x * x));
    return y;
}