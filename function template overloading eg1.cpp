#include<iostream>
using namespace std;
template <class T>
void display(T x)
{
    cout<<"Template display "<<x<<endl;
}
void display(int x)    //overloads generic display
{
    cout<<"Explicit display "<<x<<endl;
}
int main()
{
    display(100);
    display(2.84);
    display('D');
}
