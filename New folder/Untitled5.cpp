#include<iostream>
using namespace std;
class test
{
    private:
    int a,b;
    public:
    test(int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"Multiplication = "<<a*b;
    }
};
int main()
{
    test t1(5,9);
    t1.show();
    return 0;
}
