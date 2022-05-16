//with virtual function

#include<iostream>
using namespace std;
class base
{
    public:
        virtual void show()
        {
            cout<<"This is base class\n";
        }
};
class derv1: public base
{
    public:
        void show()
        {
            cout<<"This is derv1 class\n";
        }
};
class derv2: public base
{
    public:
        void show()
        {
            cout<<"This is derv2 class\n";
        }
};
int main()
{
    base *ptr;
    derv1 d1;
    derv2 d2;
    ptr=&d1;
    ptr->show();        //Will not call the show() function of base class instead calls show() of derv1 class now
    ptr=&d2;
    ptr->show();        //Will not call the show() function of base class instead calls show() of derv2 class now
    return 0;
}
