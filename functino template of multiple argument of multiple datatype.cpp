//functino template of multiple argument of multiple datatype
#include<iostream>
using namespace std;
template<class X, class Y>

void func(X a, Y b)
{
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of b = "<<b<<endl;
}
int main()
{
    func(15,12.3);
    func(2,50);
    func(3.4,2.5);
    return 0;
}
