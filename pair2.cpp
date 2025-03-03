#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<pair<int , string>>v;
    int roll,n;
    string name;
    cout<<"enter how many records \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    cout<<"enter roll no. - \n";
    cin>>roll;
    cout<<"enter name \n";
    cin>>name;
    
    v.push_back(make_pair(roll,name));
    }
    cout<<"results are -- \n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<":"<<v[i].second<<"\n";
    }
}    
