#include<iostream>
using namespace std;
class test
{
    private:
    int a,b;
    public:
    void get()
    {
        cout<<"Enter two numbers";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"Multiplication = "<<a*b<<endl;
    }
    void sq(test t1)
    {
        test t3;
        a=t1.a*t1.a;
        b=t1.b*t1.b;
    }
    void show1()
    {
        cout<<"Square of a ="<<a;
        cout<<endl<<"Square of b ="<<b;
    }
};
int main()
{
    test t1;
    t1.get();
    t1.show();
    test t2;
    t2.sq(t1);
    t2.show1();
    return 0;
}
