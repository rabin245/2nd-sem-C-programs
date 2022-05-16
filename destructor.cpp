#include<iostream>
using namespace std;
class demo
{
    private:
    int num1,num2;
    public:
    demo(int n1, int n2)
    {
        cout<<"Inside Constructor"<<endl;
        num1=n1;
        num2=n2;
    }
    void display()
    {
        cout<<"num1 = "<<num1<<endl;
        cout<<"num2 = "<<num2<<endl;
    }
    ~demo()     //destructor
    {
        cout<<"Inside Destructor";
    }
};

int main()
{
    demo obj1(10,20);
    obj1.display();
    return 0;
}
