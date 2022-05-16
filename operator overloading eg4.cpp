#include<iostream>
using namespace std;
class currency
{
    private:
        int rs,ps;
    public:
        currency()
        {
            rs=0;
            ps=0;
        }
        void show()
        {
            cout<<"Rs = "<<rs<<endl;
            cout<<"Ps = "<<ps<<endl;
        }
        void operator --(int)   //postdecrement
        {
            rs=rs-1;
            ps=ps-1;
        }
};
int main()
{
    currency c1,c2;
    cout<<"Value at c1"<<endl;
    c1.show();
    cout<<"Value at c2"<<endl;
    c2.show();
    cout<<"Overloading operator"<<endl;
    c1--;
    cout<<"value at c1"<<endl;
    c1.show();
    c2--;
    cout<<"Value at c2"<<endl;
    c2.show();
    return 1;
}
