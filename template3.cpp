#include<iostream>
using namespace std;
template<typename x1 , typename x2>
class bhopal
{
    x1 a ;
    x2 b ;
    public:bhopal(x1 t1 , x2 t2)
    {
        a=t1;
        b-t2;
    }
    public:void sum()
    {
        cout<<a+b;
    }
};
int main()
{
    bhopal<int , int>b;
    b.sum(12,23);
}