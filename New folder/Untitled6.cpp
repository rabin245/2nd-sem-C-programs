#include<iostream>
using namespace std;
class test
{
    private:
    int a,b;
    public:
    test()
    {

    }
    test(test &t)
    {
        a=t.a;
        b=t.b;
    }
    void get()
    {
        cout<<"Enter two numbers";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"Multiplication = "<<a*b<<endl;
    }
    void show1()
    {
        cout<<"a ="<<a<<endl;
        cout<<"b ="<<b<<endl;
    }
};
int main()
{
    test t1;
    t1.get();
    test t2(t1);
    t1.show();
    t2.show1();
    return 0;
}
