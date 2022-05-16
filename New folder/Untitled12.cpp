#include<iostream>
using namespace std;
class temp
{
    public:
        void show()
        {
            cout<<"This is base class";
        }
};
class der:public temp
{
    public:
        void show()
        {
            cout<<"This is derived class";
        }
};
int main()
{
    der d1;
    d1.show();
}
