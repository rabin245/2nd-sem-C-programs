#include<iostream>
using namespace std;
class temp
{
    private:
    int x;
    int y;
    public:
        temp()      //constructor
        {
            x=0;
            y=4;
        }
        void get()
        {
            cout<<"Enter value for x and y";
            cin>>x>>y;
        }
        void show()
        {
            cout<<endl<<"x = "<<x;
            cout<<endl<<"y = "<<y;
        }
};      //end of class
int main()
{
    temp t1;
    t1.show();
    temp t2;
    t2.show();
    t2.get();
    t2.show();
    return 0;
}
