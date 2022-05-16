#include<iostream>
using namespace std;
class point
{
    private:
        int x;
        int y;
        char c;
    public:
        point(int a,int b,char s)  //parametrised constructor
        {
            x=a;
            y=b;
            c=s;
        }
    void show()
    {
        cout<<endl<<"x = "<<x;
        cout<<endl<<"y = "<<y;
        cout<<endl<<"c = "<<c;
    }
};
int main()
{
    point p1(72,8,'t');
    p1.show();
    point p2(-6,2,'S');
    p2.show();
}
