#include <stdio.h>
// #include <conio.h>
#include <math.h>
void main()
{
    int n, i, j;
    float x[30], y[30], r, t, s = 0.0, p;
    // clrscr();
    printf("Enter how many point=");
    scanf("%d", &n);
    printf("Enter values of x=");
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &x[i]);
    }
    printf("Enter values of y=");
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &y[i]);
    }
    printf("Enter value which is computed=");
    scanf("%f", &t);
    for (i = 1; i <= n; i++)
    {
        r = x[i];
        p = 1;
        for (j = 1; j <= n; j++)
        {
            if (i != j)
            {
                p = p * ((t - x[j]) / (r - x[j]));
            }
        }
        p = p * y[i];
        s = s + p;
    }
    printf("The result is=%f", s);
    // getch();
}
