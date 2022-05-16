#include<iostream>
using namespace std;
class test
{
    private:
        int a,b;
    public:
        test()      //default constructor
        {
            a=1;
            b=1;
            cout<<"Default values"<<endl;
            cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
        }
    void get()
    {
        cout<<"Enter the values of the numbers";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"Multiplication = "<<a*b;
    }
};
int main()
{
    test t1;
    t1.get();
    t1.show();
    return 0;
}
