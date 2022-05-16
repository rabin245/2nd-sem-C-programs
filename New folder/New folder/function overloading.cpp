#include<iostream>
using namespace std;
class temp
{
    private:
        int x,y;
    public:
        void get()
        {
            cout<<"enter two numbers";
            cin>>x>>y;
        }
        void show()
        {
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
        }
        void show(int a)
        {
            x=a;
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
        }
};
int main()
{
    temp t1,t2;
    t1.get();
    t2.get();
    t1.show();
    t2.show(10);
}
