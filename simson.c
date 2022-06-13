/*Simpson 1/3*/
#include <stdio.h>
// #include <conio.h>
#include <math.h>
float fun(float);
void main()
{
    int i, n;
    float a, b, h, x[20], y[20], Y0, Y1, I, Yodd, Yeven, r;
    // clrscr();
    printf("Enter lower limit,a=");
    scanf("%f", &a);
    printf("Enter upper limit,b=");
    scanf("%f", &b);
    printf("Enter no of interval,n=");
    scanf("%d", &n);
    h = (b - a) / n;
    Y0 = 0;
    Yodd = 0;
    Yeven = 0;
    printf(" i     x[i]      y[i]     y[0,h]     y[odd]     y[even]");
    for (i = 0; i <= n; i++)
    {
        x[i] = a + i * h;
        y[i] = fun(x[i]);
        if ((i == 0) || (i == n))
        {
            printf("\n %d  %f  %f %f", i, x[i], y[i], y[i]);
            Y0 = Y0 + y[i];
        }
        else
        {
            r = i % 2;
            if (r != 0)
            {
                printf("\n %d  %f  %f               %f", i, x[i], y[i], y[i]);
                Yodd = Yodd + y[i];
            }
            else
            {
                printf("\n %d  %f  %f                          %f", i, x[i], y[i], y[i]);
                Yeven = Yeven + y[i];
            }
        }
    }
    I = (h / 3) * (Y0 + 4 * Yodd + 2 * Yeven);
    printf("\n\n Integrated value=%f", I);
    // getch();
}

float fun(float x)
{
    float y;
    y = (1 / (1 + x));
    return (y);
}
