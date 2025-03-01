#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{2,5,3,7,8,9};
    v[1] = 90;
    vector<string>v2{"sun" , "moon" , "earth"};
    for(auto k:v2)
    {
        cout << k << "\t";
    }
    vector<int>v3(5);
    cout<<"\n";
    for(auto k:v3)
    {
        cout << k << "\t";
    }
    cout << "\n";
    vector<int>v4(5,10);
    v4[3] = 2000;
    for(auto k:v4)
    {
        cout << k << "\t";
    }
    vector<int>vec;
    int n ,a ;
    cout << "enter the size of vector \n";
    cin>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        cout << "enter value \t";
        cin >> a;
        vec.push_back(a);
    }
    cout << "data of vector is \n";
    for(auto p:vec)
    {
        cout << p << "\t";
    }
}