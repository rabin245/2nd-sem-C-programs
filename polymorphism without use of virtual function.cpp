//without virtual function

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
    ptr->show();        //Will call the show() function of base class instead of derv1 class
    ptr=&d2;
    ptr->show();        //Will call the show() function of base class instead of derv2 class
    return 0;
}
