#include<iostream>
using namespace std;
class Base
{
    int x;
public:
    Base(int i) // parameterized constructor
    {
        x = i;
        cout << "Base Parameterized Constructor\n";
        cout<<x<<endl;
    }
};

class Derived : public Base
{
    int y;
public:
    //Derived(int j):Base(j)      // parameterized constructor
    Derived(int j):Base(j)      // parameterized constructor
    {
        y = j;
        cout << "Derived Parameterized Constructor\n";
        cout<<y<<endl;
    }
};

int main()
{
    Derived d(10);
}
