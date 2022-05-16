#include<iostream>
using namespace std;
class unaryf
{
    private:
        int a,b,c;
    public:
        void get()
        {
            cout<<"Enter values of a,b,c";
            cin>>a>>b>>c;
        }
        void show()
        {
            cout<<"Values = "<<a<<b<<c<<endl;
        }
        friend void operator -(unaryf &);
};
void operator -(unaryf &X)
{
    X.a= -X.a;
    X.b= -X.b;
    X.c= -X.c;
}
int main()
{
    unaryf t1;
    t1.get();
    cout<<"Before overloading"<<endl;
    t1.show();
    cout<<"After overloading"<<endl;
    -t1;
    t1.show();
    return 0;
}
