#include<iostream>
using namespace std;
class base
{
    public:
        virtual void Display1()=0;
        virtual void Display2()=0;
        void Display3()
            {
                cout<<"\nThis is Display3() function of Base Class";
            }
};
class derv : public base
{
    public:
        void Display1()
        {
            cout<<"\nThis is Display1() function of Derived Class";
        }
        void Display2()
        {
            cout<<"\nThis is Display2() function of Derived Class";
        }
};
int main()
{
    derv D;
    D.Display1();
    D.Display2();
    D.Display3();
    return 0;
}
