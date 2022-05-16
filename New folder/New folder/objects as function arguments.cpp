#include<iostream>
using namespace std;
class a
{
public:
    int x, y;
    void get()
    {
        cout<<"Enter two nums";
        cin>>x>>y;
    }
    void show()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
    void show1(a obj1)
    {
        x=obj1.x-2;
        y=obj1.y-4;
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};
int main()
{
    a obj1,obj2;
    obj1.get();
    obj1.show();
    obj2.show1(obj1);
}
