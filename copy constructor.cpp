#include<iostream>
using namespace std;
class point
{
    private:
        int x;
        int y;
    public:
        point(int a, int b)//parametrised constructor
        {
            x=a;
            y=b;
        }
        point(point &p) //copy constructor
        {
            x=p.x;
            y=p.y;
        }
        void show()
        {
            cout<<x<<endl;
            cout<<y<<endl;
        }
};
int main()
{
    point p1(20,30);    //calls parametrised constructor
    point p2(p1);       //calls copy constructor
    //point o2=p1;
    cout<<"Value of object p1:"<<endl;
    p1.show();
    cout<<"Value of object p2:"<<endl;
    p2.show();
    return 0;
}
