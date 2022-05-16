#include<iostream>
using namespace std;
class Base
{
    int x,y;
public:
    Base(int a, int b) // parameterized constructor
    {
        x = a;
        y = b;
        cout << "Base Parameterized Constructor\n";
        cout<<x<<y<<endl;
    }
};
class derv: public Base
{
    int m,n;
public:
    derv(int c,int d, int e, int f):Base(c,d)
    {
        m =e ;
        n = f;
    }
};
int main()
{
    derv d1(2,5,3,2);
    return 0;

}
