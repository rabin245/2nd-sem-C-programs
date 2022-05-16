#include<iostream>
using namespace std;
class temp
{
    private:
        int x;
        int y;
    public:
        void get()
        {
            cout<<"Enter two numbers";
            cin>>x>>y;
        }
        void calc()
        {
            cout<<endl<<" x+y = "<<x+y;
        }
        void calc(int a, int b)
        {
            cout<<endl<<"x="<<a;
            cout<<endl<<"y="<<b;
            cout<<endl<<"x-y = "<<a-b<<endl;
        }
};
int main()
{
    temp t1,t2;
    t1.get();
    t1.calc();
    t2.calc(4,2);
}
