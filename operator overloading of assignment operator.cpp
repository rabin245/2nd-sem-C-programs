#include<iostream>
using namespace std;
class dist
{
    private:
        int rs;
    public:
        void get()
        {
            cout<<"Enter distance"<<endl;
            cin>>rs;

        }
        void operator = (dist d2)
        {
            rs=d2.rs;
        }
        void show()
        {
            cout<<"Distance = "<<rs<<endl;
        }
};
int main()
{
    dist d1,d2;
    d1.get();
    d2.get();
    cout<<"d1 First distance:"<<endl;
    d1.show();
    cout<<"d2 Second distance:"<<endl;
    d2.show();
    d1=d2;
    cout<<"d1 First distance:"<<endl;
    d1.show();
    return 0;
}
