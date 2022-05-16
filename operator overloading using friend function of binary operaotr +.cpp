#include<iostream>
using namespace std;
class demo
{
    int x,y;
    public:
        demo()
        {
            x=0;
            y=0;
        }
        demo(int a, int b)
        {
            x=a;
            y=b;
        }
        friend demo operator +(demo &d1, demo &d2)
        {
            demo d3;
            d3.x=d1.x+d2.x;
            d3.y=d1.y+d2.y;
            return d3;
        }
        void display()
        {
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
        }
};

int main()
{
    demo d1(2,3);
    demo d2(4,5);
    demo d3;
    //d3=operator +(d1,d2);
    d3 = d1+d2;
    cout<<"Object d1"<<endl;
    d1.display();
    cout<<"Object d2"<<endl;
    d2.display();
    cout<<"Object d3"<<endl;
    d3.display();
    return 0;

}
