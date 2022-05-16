#include<iostream>
using namespace std;
class temp
{
    private:
        int x,y;
    public:
        void get()
        {
            cout<<"Enter two numbers";
            cin>>x>>y;
        }
        void get(int a, int b)
        {
            x=a;
            y=b;
            cout<<endl;
        }
        void show()
        {
            cout<<endl<<"x = "<<x;
            cout<<endl<<"y = "<<y;
        }
};
int main()
{
    temp t1,t2;
    t1.get();
    t1.show();
    t2.get(5,6);
    t2.show();
}
