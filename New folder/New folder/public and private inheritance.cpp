#include<iostream>
using namespace std;
class A
{
    protected:
        int x=1,y=2;
};
class B
{
    protected:
        int a=3,b=4;
};
class C: private A, public B            //derives the public and protected properties of A and B privately and publicly respectivelyl
{                                       //private: int x,y; public: int a, b;
    public:
        void show()
        {
            cout<<"Child Class!"<<endl;
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};
int main()
{
    C obj1;
    obj1.show();
}
