//function template of multiple argument of multiple datatype
#include<iostream>
using namespace std;
template<class X>
void func(X a)
{
    cout<<"Value of a = "<<a<<endl;
}

template<class X, class Y>

void func(X b, Y c)
{
    cout<<"Value of b = "<<b<<endl;
    cout<<"Value of c = "<<c<<endl;
}
int main()
{
    func(20);
    func(3,2.5);
    return 0;
}
