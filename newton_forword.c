#include <stdio.h>
// #include <conio.h>
#include <math.h>
void main()
{
    int n, i, j;
    float x[30], y[30], h, u, p = 1, sum, s;
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
    scanf("%f", &u);
    h = x[2] - x[1];
    s = (u - x[1]) / h;
    sum = y[1];
    for (i = 1; i < n - 1; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            y[j] = y[j + 1] - y[j];
        }
        p = p * (s - i + 1) / i;
        sum = sum + p * y[1];
    }
    printf("The result is=%f", sum);
    // getch();
}
