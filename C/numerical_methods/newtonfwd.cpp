#include<stdio.h>
int main()
{
	int i,j,n;
	float x[10],y[10],f[10][10],inter,h,u,s,p=1.0;

	printf("Enter n");
	scanf("%d",&n);

	printf("Enter x values");
	for(i=0;i<=n;i++)
	scanf("%f",&x[i]);

	printf("Enter y values");
	for(i=0;i<=n;i++)
	scanf("%f",&y[i]);

	printf("Enter interpolating point");
	scanf("%f",&inter);

	h=x[1]-x[0];

	u=(inter-x[0])/h;

	s=y[0];
	
    printf("s==>%f\n",s);
    
	for(j=0;j<=n;j++)
	f[0][j]=y[j];

	for(i=1;i<=n;i++){
	for(j=0;j<=n;j++){
	f[i][j]=f[i-1][j+1]-f[i-1][j];
	printf("%f\t",f[i][j]);
	}
	printf("\n");
}

	for(i=1;i<=n;i++)
	{
        p=p*(u-i+1)/i;
        s=s+p*f[i][0];
	}
	printf("\n\n\nBaal, answer aekhane aache upare ki dekhcho->[%f] ",s);
}
