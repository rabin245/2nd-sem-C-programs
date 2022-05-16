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
