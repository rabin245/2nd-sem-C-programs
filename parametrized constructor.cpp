#include<iostream>
using namespace std;
class point
{
    private:
        int x;
        int y;
    public:
        point(int a,int b)  //parametrised constructor
        {
            x=a;
            y=b;
        }
    void show()
    {
        cout<<"x = "<<x;
        cout<<endl<<"y = "<<y;
    }
};
int main()
{
    point p1(72,8);
    p1.show();
    point p2(-6,2);
    p2.show();
}
