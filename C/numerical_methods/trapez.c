#include<stdio.h>
#include<math.h>

float f(float y)
{
return sqrt(sin(y));
}

int main()
{

float a,b,s,h;
int i,n;
printf("Enter the value of n");
scanf("%d",&n);

printf("Enter the value of a and b");
scanf("%f %f",&a,&b);
s=0;
h=(b-a)/n;

for(i=0;i<n;i++)
{
s=s+(h/2)*(f(a)+f(a+h));
a=a+h;
}
printf("%f",s);
}
