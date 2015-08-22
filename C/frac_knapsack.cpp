#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Item {
public:
float val;
float weight;
float rat;
};

 bool by_ratio(Item a, Item b) {
 return (a.rat>b.rat?true:false);
 }


int main(){
    int total = 15;
    int sack = total;
    int n=5;
    int val[]= {4,2,2,1,10};
    int weight[] = {12,1,2,1,4};
    int max_val = 0;
    vector<Item> v;

    for(int i=0;i<n;i++)
    {
    Item it;
    it.val = val[i];
    it.weight = weight[i];
    it.rat = val[i]/weight[i];
    v.push_back(it);
    }

    sort(v.begin(),v.end(),by_ratio);
    for(vector<Item>::iterator i=v.begin();i!=v.end();i++)
    max_val += i->val;


    vector<Item>::iterator last = v.end();
    last--;

    // output
    cout<<max_val-last->val;

}
