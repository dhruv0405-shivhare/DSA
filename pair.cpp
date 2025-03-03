#include <iostream>
using namespace std;
#include <vector>
int main()
{
    pair<int , int>p1{100,22};
    p1=make_pair(100,22);//another wat to insert data
    cout<<"roll no. - "<<p1.first <<"\n";
    cout<<"age - "<<p1.second <<"\n";
}