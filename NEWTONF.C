#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,p,t;
float x[20],dy[20][20],fx,u,h,x1,n,b;

printf("\n enter the point:");
scanf("%f",&n);
n=n-1;
printf("\n enter the value of x:");
for(i=0;i<=n;i++)
{
scanf("%f",&x[i]);
}
printf("\n enter the value of points:");
i=0;
for(j=0;j<=n;j++)
{
scanf("%f",&dy[i][j]);
}
printf("\n enter the value of x:");
scanf("%f",&x1);
printf("%f",&x1);
printf("\n %f\n",x1);
h=x[1]-x[0];
u=(x1-x[0])/h;
b=n;
for(i=1;i<=b;i++)
{
b=b-1;
for(j=0;j<=n;j++)
{
dy[i][j]=dy[i-1][j+1]-dy[i-1][j];
printf("%f",dy[i][j]);
}
printf("\n");
}
fx=dy[0][0]+u*dy[1][0];
printf("%f",fx);
p=1;
t=u;
for(i=2;i<=n;i++)
{
p=p*i;
k=i-1;
u=u*(t-k);
fx=fx+u*dy[i][0]/p;
}
printf("f(%f)=%f",x1,fx);
getch();
}
