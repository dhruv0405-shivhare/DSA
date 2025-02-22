#include<iostream>
using namespace std;
void sum (int a, int b)
{
    cout<<"result = "<< a+b <<"\n"
}
void sum (double a, double b)
{
    cout<<"result = "<< a+b <<"\n"
}
int main()
{
    sum(2.9,3.5)
}
