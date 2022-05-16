#include<iostream>
using namespace std;
class base
{
    public:
        void show()
        {
            cout<<"This is base class"<<endl;
        }
};
class derv: public base
{
    public:
        void show()
        {
            cout<<"This is derived class"<<endl;
        }
};

int main()
{
    base *ptr;
    derv d1;
    ptr=&d1;
    ptr->show();        //Will call the show() function of base class instead of derv class
    return 0;
}
