#include<stdio.h>
int main()
{
	int i,j,n;
	float x[10],y[10],f[10][10],h,s,p=1.0,u,a;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the x values\n");
	for(i=1;i<=n;i++)
		scanf("%f",&x[i]);
	printf("Enter the y values\n");

	for(i=1;i<=n;i++)
		scanf("%f",&y[i]);
	printf("Enter the interpolating point");
	scanf("%f",&a);
	h=x[1]-x[0];
	u=(a-x[n])/h;
	s=y[n];

	for(j=0;j<=n;j++)
		f[0][j]=y[j];

	for(i=1;i<=n;i++)
		for(j=i;j<=n;j++)
			f[i][j]=f[i-1][j]-f[i-1][j-1];

	for(i=1;i<=n;i++)
	{
		p=p*(u+i-1)/i;
		s+=p*f[i][n];
	}	
	printf("\n%f\n",s );

}