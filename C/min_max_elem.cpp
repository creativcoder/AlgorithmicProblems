#include <iostream>

using namespace std;

int main()
{   int arr[] = {4,52,246,3,21};
    int mi,ma;
    mi=ma=arr[0];
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        if(arr[i]>ma) ma=arr[i];
        else if(arr[i]<mi) mi=arr[i];
    }
    cout << "Min: "<<mi<<" Max: "<<ma<< endl;
    return 0;
}
