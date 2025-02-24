#include<iostream>
using namespace std;
template<typename v1>
class cybrom
{
    v1 a;
    public:cybrom(v1 x)
    {
        a=x;
    }
    v1 show()
    {
        return a+1;
    }
};
template<typename x1 , typename x2>
class bhopal
{
    x1 a , x2 b;
    public:void sum(x1 t1 , x2 t2)
    {
        cout<<t1+t2;
    }
}
int main()
{
    cybrom<int>obj(34);
    cout<<obj.show();
    bhopal<int , int>b;
    b.sum(12,23);
}