#include<iostream>
using namespace std;
class A         //class
{
    private:
        int x;
    public:
        void get()
        {
            cout<<"Enter a num";
            cin>>x;
        }
        void show()
        {
            cout<<"x = "<<x;
        }
};      //end of class
int main()
{
    A obj;          //object
    obj.get();
    obj.show();
}
