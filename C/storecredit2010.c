#include <stdio.h>
#include <stdlib.h>

int index1,index2;
int cal(int arr[],int len,int sum)
{
  
int i,j,flag=0;
for(i=0;i<len;i++)
    for(j=i+1;j<len;j++)
   if(arr[i]+arr[j]==sum)
{
flag=1;index1=i+1;index2=j+1;return flag;
}
return flag;
}

int main()
{
    int c,t,i,flag;
    int *items;
    int m=0,n,j,times;
    FILE *fp,*out;
    fp=fopen("large.in","r");
    out=fopen("output_large.out","w");
    fscanf(fp,"%d",&t);
int f=1;
    while(m!=t)
    {
            fscanf(fp,"%d",&c);
            fscanf(fp,"%d",&i);
            items=(int*)calloc(i,sizeof(int));
            for(j=0;j<i;j++)
                fscanf(fp,"%d",(items+j));
            if(cal(items,i,c))
    {
        fprintf(out,"Case #%d: %d %d\n",m+1,index1,index2);
    }
        m++;
    }
   return 0;
  }
   

