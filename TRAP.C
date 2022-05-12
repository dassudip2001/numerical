#include<stdio.h>
#include<conio.h>
#include<math.h>
float fun(float);
void main()
{
int i,n;
float x[20],y[20],h,a,b,y0,y1,I;
clrscr();
printf("\n enter lower limit,upper limit,inter val:");
scanf("%f%f%d",&a,&b,&n);
h=(b-a)/n;
y0=0;
y1=0;
printf("i       x[i]          y[i]          y[0,n]           y[outher]\n");
for(i=0;i<=n;i++)
{
x[i]=a+i*h;
y[i]=fun(x[i]);
if(i==0||i==n)
{
y0=y0+y[i];
printf("%d       %f       %f        %f",i,x[i],y[i],y[i]);
}
else
{
y1=y1+y[i];
printf("%d       %f       %f                           %f",i,x[i],y[i],y[i]);
}
printf("\n");
}
I=(h/2)*(y0+2*y1);
printf("\n interegated vale=%f",I);
getch();
}
float fun(float x)
{
float y;
y=pow(x,2);
return(y);
}