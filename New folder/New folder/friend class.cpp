#include<iostream>
using namespace std;
class a
{
    private:
        int x=50;
    public:
        friend class b;
};
class b
{
public:
    void func(a obj)
    {
        cout<<"Value of x = "<<obj.x;
    }
};
int main()
{
    a obj1;
    b obj2;
    obj2.func(obj1);
}
