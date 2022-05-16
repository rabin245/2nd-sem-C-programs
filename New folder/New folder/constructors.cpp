#include<iostream>
using namespace std;
class temp
{
    private:
    int x;
    int y;
    public:
        temp()      //default constructor
        {
            cout<<"Default constructor called"<<endl;
            cout<<"Object created"<<endl;
            x=0;
            y=0;
        }
        temp(int m, int n)      //parametrised constructor
        {
            cout<<"Parametrized constructor called"<<endl;
            cout<<"Object created"<<endl;
            x=m;
            y=n;
        }
        temp(temp &t) //copy constructor
        {
            cout<<"Copy constructor called"<<endl;
            x=t.x;
            y=t.y;
        }
        void show()
        {
            cout<<endl<<"x = "<<x;
            cout<<endl<<"y = "<<y<<endl;
        }
};      //end of class
int main()
{
    temp t1;
    t1.show();
    temp t2(2,3);
    t2.show();
    temp t3(t2);
    t3.show();
    return 0;
}
