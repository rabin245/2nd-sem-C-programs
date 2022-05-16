#include<iostream>
using namespace std;
class rectangleone;
class rectangletwo
{
    private:
        int l,b;
    public:
        rectangletwo(int x, int y)
        {
            l=x;
            b=y;
        }
        friend void display(rectangletwo, rectangleone);
};  //end of class rectangletwo

class rectangleone
{
    private:
        int length, breadth;
    public:
        rectangleone(int m, int n)
        {
            length=m;
            breadth=n;
        }
        friend void display(rectangletwo, rectangleone);
};  //end of class rectangleone

void display(rectangletwo r2, rectangleone r1)
{
    cout<<"First rectangletwo values"<<endl;
    cout<<r2.l<<" "<<r2.b<<endl;
    cout<<"Second rectangleone valule"<<endl;
    cout<<r1.length<<" "<<r1.breadth<<endl;
}

int main()
{
    rectangleone r1(2,3);
    rectangletwo r2(4,5);
    display(r2,r1);
    return 1;
}
