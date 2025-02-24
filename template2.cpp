#include<iostream>
using namespace std;
template<typename tv>
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
int main()
{
    cybrom<int>obj(34);
    cout<<obj.show();
}