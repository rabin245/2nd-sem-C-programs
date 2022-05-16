#include<iostream>
using namespace std;
class temp
{
    private:
    int x;
    int y;
    public:
        temp()      //default constructor
        {
            cout<<"Constructor called"<<endl;
            cout<<"Obejct created"<<endl;
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
    temp t2;
    t2.get();
    t2.show();
    return 0;
}
