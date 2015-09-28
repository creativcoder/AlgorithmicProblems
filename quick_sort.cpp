#include <iostream>

using namespace std;

void swp(int *a,int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int part(int arr[],int left,int right)
{
    int i=left,j=right,pivot=arr[(left+right)/2];
    while(i<=j)
    {
        while(arr[i]<=pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<=j)
        {
          swp(&arr[i],&arr[j]);
          i++;
          j--;
        }
    }
    return i;
}

void quicksort(int arr[],int left,int right)
{
    if(left<right)
    {
        int m = part(arr,left,right);
        quicksort(arr,left,m-1);
        quicksort(arr,m+1,right);
    }
}

int main()
{
    int arr[] = {324,2,35,6,4,78,65};
    int len =  sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,len-1);
    for(int i=0;i<len;i++)
        cout<<arr[i]<<",";
    return 0;
}
