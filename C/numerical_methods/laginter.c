#include<stdio.h>

#define SIZE 20
 
void main()
{

 float x[SIZE], y[SIZE],m,o, inter, s=0;

 int i,j,n;

 printf("Enter the value of n");
 scanf("%d", &n);
 printf("Enter the values of x");
 for(i=0; i<n; i++)
  scanf("%f", &x[i]);
printf("Enter the values of y");
 for(i=0; i<n; i++)
  scanf("%f", &y[i]);

 printf("Enter the interpolating point");
 scanf("%f", &inter);

 for(i=0;i<n;i++)
 {
  	m=1;
 	o=1;

 for(j=0;j<n;j++)
   
   if(i!=j)
   {
    m*= inter-x[j];
    o *= x[i]-x[j];
   }

  s+=(m/o)*y[i];
  
 }

 printf("%f",s);

}
