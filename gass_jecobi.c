#include <stdio.h>
// #include <conio.h>
#include <math.h>
#define esp 0.0001
#define x1(x2, x3) ((17 - 20 * (x2) + 2 * (x3)) / 20)
#define x2(x1, x3) ((-18 - 3 * (x1) + (x3)) / 20)
#define x3(x1, x2) ((25 - 2 * (x1) + 3 * (x2)) / 20)
void main()
{
    double x1 = 0, x2 = 0, x3 = 0, y1, y2, y3;
    int i = 0;
    // clrscr();
    printf("  x1\t\t   x2\t\t   x3\n");
    printf("%f\t %f\t %f", x1, x2, x3);
    do
    {
        y1 = x1(x2, x3);
        y2 = x2(x1, x3);
        y3 = x3(x1, x2);
        if (fabs(y1 - x1) < esp && fabs(y2 - x2) < esp && fabs(y3 - x3) < esp)
        {
            printf("\n\n\nx1=%f\n\n", y1);
            printf("\nx2=%f\n\n", y2);
            printf("\nx3=%f\n\n", y3);
            i = 1;
        }
        else
        {
            x1 = y1;
            x2 = y2;
            x3 = y3;
            printf("\n%f\t %f\t %f", x1, x2, x3);
        }
    } while (i != 1);
    // getch();
}
