#include <iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>v{3,2,5,1};
    v[1]=90;
    vector<string>v2{"sun" , "mon" , "tues"};
    for (auto p:v)
    {
        cout<<p<<"\t";
    }
    vector<int>v3(5);
    cout<<"\n";
    for(auto k:v3)
    {
        cout<<k<<"\t";
    }
    vector<int>v4(5,10);
    v4[3]=2000;
    for(auto k:v4)
    {
        cout<<k<<"\t"
    }
}