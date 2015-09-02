#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Obj {
    public:
        float c;
        float v;
        float rat;
};


bool byRat(Obj a,Obj b)
    {
        return (a.rat>b.rat?true:false);
        }

int main()
{   int n = 5;
    int c[] = {12,1,2,1,4};
    int v[] = {4,2,2,1,10};
    int w = 15;
    vector<Obj> vec;
    for(int i=0;i<n;i++)
    {
        Obj o;
        o.c = c[i];
        o.v = c[i];
        o.rat = float(v[i])/float(c[i]);
        vec.push_back(o);
    }

    sort(vec.begin(),vec.end(),byRat);

    for(int i=0;i<n;i++)
    {
        if(i==(n-1))
            {
                float weight_per = ((float)w*100/(float)vec[i].v);
            cout<<"Item "<<i<<" "<<weight_per<<"% added "<<endl;
            w-=weight_per;
            }
        else {
        cout<<"Item "<<i<<" added "<< w-vec[i].c<<endl;
        w-=vec[i].c;
}

    }

//cout<<endl<<"weight is "<<w;
     return 0;
}
