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
            x=0;
            y=4;
        }
        temp(int m, int n)      //parametrized constructor
        {
            x=m;
            y=n;
        }
        void show()
        {
            cout<<endl<<"x = "<<x;
            cout<<endl<<"y = "<<y;
        }
};      //end of class
int main()
{
    temp t1;
    temp t2(4,4);
    t1.show();
    t2.show();
    return 0;
}
