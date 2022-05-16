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
        temp function(temp t1,temp t2)
        {
            temp t;
            x=t2.x+t1.x;      //x and y are the data members of t3
            y=t2.y+t1.y;
            return t;
        }

};
int main()
{
    temp t1,t2,t3;
    t1.get();
    t1.show();
    t2.get();
    t3.function(t1,t2);
    t3.show();
}
