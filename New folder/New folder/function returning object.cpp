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
        void show()
        {
            cout<<endl<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
        }
        temp function(temp t1)
        {
            temp t;
            t.x=x+t1.x;      //x and y are the data members of t2
            t.y=y+t1.y;
            return t;
        }

};
int main()
{
    temp t1,t2;
    t1.get();
    t1.show();
    t2.get();
    t2=t2.function(t1);
    t2.show();
}
