#include<iostream>
using namespace std;
class temp
{
    int x;
    public:
        temp()
        {
            x=0;
        }
        temp(int a)
        {
            x=a;
        }
        friend void operator = (temp &t, temp &t1)
        {
            //temp t;
            t=t1.x;
            //return t;
        }
        void show()
        {
            cout<<"x = "<<x<<endl;
        }
};
int main()
{
    temp t1(3);
    temp t2;
    //t2=t1;
    operator = (t2,t1);
    t1.show();
    return 0;
}
