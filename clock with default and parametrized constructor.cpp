#include<iostream>
using namespace std;
class clock
{
    private:
        int hr;
        int min;
        int sec;
    public:
        clock()
        {
            sec=10;
        }
        clock(int x,int y)
        {
            hr=x;
            min=y;
        }
    void show1()
    {
        cout<<"sec = "<<sec;
    }
    void show2()
    {
        cout<<endl<<"hr = "<<hr;
        cout<<endl<<"min = "<<min;
    }
};
int main()
{
    clock c1;
    c1.show1();
    clock c2(6,50);
    c2.show2();
    return 0;
}
