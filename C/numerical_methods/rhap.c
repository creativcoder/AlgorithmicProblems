#include <stdio.h>
#include <math.h>

float f(float x)
{
	return (x+log(x)-2.0);
}
float df(float x)
{
	return (1.0+(1.0/x));
}

int main()

{
	float s=0,a;
	int i,n;
    float r1,r2;
    printf("Enter approximation range");
    scanf("%f%f",&r1,&r2);
    while(f(r1)<0)
    {
    printf("%f",f(r1));
    r1++;
    }
    a=r1+(1+r1)/2;
    printf("Initial approximation is %f",a);
	printf("Enter n\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	s=a-(f(a)/df(a));
	a=s;
}
printf("%f\n",s );
}
