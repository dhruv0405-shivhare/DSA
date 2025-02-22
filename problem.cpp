// #include<iostream>
// using namespace std;
// void sum (int a, int b)
// {
//     cout<<"result = "<< a+b <<"\n"
// }
// void sum (double a, double b)
// {
//     cout<<"result = "<< a+b <<"\n"
// }
// int main()
// {
//     sum(2.9,3.5)
// }
// template is a generalize format of any program that may be fuction or class  
// two types of template
// 1. function template, 2. class template


#include<iostream>
using namespace std;
template<typename t1>
// content place holder ---> < >
t1 sum (t1 a, t2 b)
{
    return a + b;
}
int main()
{
    cout<<sum(2.5,3.6);
}