//with virtual function only

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
    base *ptr[2];
    derv1 d1;
    derv2 d2;
    ptr[0]=&d1;
    ptr[1]=&d2;
    ptr[0]->show();
    ptr[1]->show();
    return 0;
}
