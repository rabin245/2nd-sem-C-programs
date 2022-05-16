#include<iostream>
using namespace std;
class base
{
private:
    int x,y;
public:
    base()      //default constructor of base class
    {
        x=0;
        y=5;
        cout<<x<<y<<endl;
    }
};
class drv: public base
{
private:
    int m,n;
public:
    drv()       //default condtructor of derived class
    {
        m=1;
        n=2;
        cout<<m<<n<<endl;
    }
};
int main()
{
    drv d1;
}
