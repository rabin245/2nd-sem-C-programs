#include<iostream>
using namespace std;
class b;
class a
{
    private:
        int length;
    public:
        void get()
        {
            cout<<"Enter the height";
            cin>>length;
        }
    friend void area(a,b);
};
class b
{
    private:
        int breadth;
    public:
        void get()
        {
            cout<<"Enter the breadth";
            cin>>breadth;
        }
        friend void area(a,b);
};

void area(a obj1,b obj2)
{
    int area;
    cout<<"Length = "<<obj1.length<<endl;
    cout<<"breadth = "<<obj2.breadth<<endl;
    area=obj1.length*obj2.breadth;
    cout<<"Area = "<<area;
}
int main()
{
    a obj1;
    obj1.get();
    b obj2;
    obj2.get();
    area(obj1,obj2);
}
