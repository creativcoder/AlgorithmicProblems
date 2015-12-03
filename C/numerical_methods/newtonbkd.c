#include<stdio.h>
int main()
{
	float f[10][10],x[10],y[10],a,u,h,s,p=1.0;
	int n,i,j;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter x values\n");
	for(i=0;i<=n;i++)
		scanf("%f",&x[i]);
	printf("Enter y values\n");
	for(i=0;i<=n;i++)
		scanf("%f",&y[i]);
	printf("Enter interpolating point\n");
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
		s=s+p*f[i][n];
	}
	printf("%6.5f\n",s );

}