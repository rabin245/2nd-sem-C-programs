#include<iostream>
using namespace std;
class base
{   protected:
        int a;
    public:
        virtual void show()=0;
};
class child: public base
{
    public:
        void show()
        {
            a=2;
            cout<<" a = "<<a;
        }
};
int main()
{
    child c1;
    c1.show();
}
