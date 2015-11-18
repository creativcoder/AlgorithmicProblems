#include <stdio.h>
int cas = 0,j,i,T,C,flag=0,I,price[2001],sp=0,lp=0;
int main()
{
FILE *inp;
FILE *out;
inp = fopen("A-large-practice.in","r");
out = fopen("A-large-practice.out","w");
fscanf(inp,"%d",&T);
while(T--){
fscanf(inp,"%d",&C);
fscanf(inp,"%d",&I);
int temp = I;
int k=0;
while(k<I)
	{	
	fscanf(inp,"%d",&price[k]);
	k++;
	}
	
	for(i=0;i<I;i++)
	{	for(j=i+1;j<I;j++){
		if((price[i]+price[j])==C)
			{sp = i;
			lp = j;break;}
	}
	}
	fprintf(out,"Case #%d: %d %d\n",++cas,sp+1,lp+1 );
}
}
