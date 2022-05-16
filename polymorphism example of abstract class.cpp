#include<iostream>
using namespace std;
class A
{
    public:
        void show1()                //normal function
        {
            cout<<"This is normal function"<<endl;
        }
        virtual void show2()         //virtual function
        {
            cout<<"This is virtual function"<<endl;
        }
        //virtual void show3()=0;     //pure virtual function
};

int main()
{
    A o[3];
    o[0].show1();
    o[1].show2();
    //o[2].show3();         //pure virtual functino are used in abstract class which donot have object
    return 0;
}
