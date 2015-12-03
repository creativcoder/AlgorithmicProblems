#include<stdio.h>
#include<math.h>

float f(float x)
{
return (pow(x,3)-3*x-5);

}

int main()
{
float e=0.0001,r1,r2,x;
int i,n;
printf("Enter approximation ranges");
scanf("%f%f",&r1,&r2);

while(f(++r1)<0);

float a,b;

a=r1;

b=r1+1;

printf("Enter n\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
x=(b*f(a)-a*f(b))/(f(a)-f(b));
if(f(b)*f(x)<0)
a=x;else b=x;
printf("%f ------ %f\n",x,f(x));
if(fabs(a-b)<=e)
break;
}

}
