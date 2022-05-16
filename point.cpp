#include<iostream>
#include<conio.h>
using namespace std;
class point
{
    private:
    int x;
    int y;
    public:
    point()//constructor
    {
        x=5;
        y=0;
    }

    void get()
    {
        cout<<"Enter value of x";
        cin>>x;
        cout<<"Enter value of y";
        cin>>y;
    }
    void show()
    {
        cout<<endl<<"x = "<<x;
        cout<<"y = "<<y;
    }
};//end of class

int main()
{
    point p1;//counstructor call
    p1.show();
    p1.get();
    p1.show();
    point p2;//constructor call
    p2.get();
    p2.show();
    return 0;
}
