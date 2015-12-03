#include<stdio.h>
float f(float y)
{
return 1/(1+y*y);
}

int main()
{

float a,b,s,h;
int i,n,m;
printf("Enter the value of n");
scanf("%d",&n);

printf("Enter the value of a and b");
scanf("%f %f",&a,&b);
s=0;
h=(b-a)/n;
m=n/6;
for(i=1;i<=m;i++)
{
s=s+((3*h)/10)*(f(a)+5*f(a+h)+f(a+2*h)+6*f(a+3*h)+f(a+4*h)+5*f(a+5*h)+f(a+6*h));
a=a+6*h;
}
printf("%f",s);
}
