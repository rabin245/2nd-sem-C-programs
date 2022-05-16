#include<iostream>
using namespace std;
class base
{
public:
    int x=4,y=3;
};
class drv: protected base       //inherits all the protected and public properties of class base as protected
{
public:
    void show()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};
int main()
{
    drv d1;
    d1.show();
}
