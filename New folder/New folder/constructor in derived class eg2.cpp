#include<iostream>
using namespace std;
class Base
{
    int x;
public:
    Base(int i)
    {
        x = i;
        cout << "Base Parameterized Constructor\n";
        cout<<x<<endl;
    }
};
class Base1
{
    float y;
public:
    Base1(float j)
    {
        y = j;
        cout << "Base1 Parameterized Constructor\n";
        cout<<y<<endl;
    }
};
class Derived : public Base1, public Base       //the constructor are called in order of this declaration
{
    int z;
public:
    Derived(int a,float b, int c):Base(a), Base1(b)
    {
        z = a;
        cout << "Derived Parameterized Constructor\n";
        cout<<z<<endl;
    }
};

int main()
{
    Derived d(1,2.3,3);
}
