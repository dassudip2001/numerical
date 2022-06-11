#include <stdio.h>
// #include <conio.h>
#include <math.h>
void main()
{
    int n, i, j, k;
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
    s = (u - x[n]) / h;
    sum = y[n];
    for (i = n, k = 1; i >= 1, k < n; i--, k++)
    {
        for (j = n; j >= 1; j--)
        {
            y[j] = y[j] - y[j - 1];
        }
        p = p * (s + k - 1) / k;
        sum = sum + p * y[n];
    }
    printf("The result is=%f", sum);
    // getch();
}
