#include<iostream>
using namespace std;
class base
{
    public:
        virtual ~base()
        {
            cout<<"This is base class destructor";
        }
};
class derived:public base
{
    public:
        ~derived()
        {
            cout<<"This is derived class destructor";
        }
};
int main()
{
    base *ptr = new derived();      //new creates memory block like malloc or calloc
    //some code
    delete ptr;                     //delete deallocates or frees the memoey block like free()
                                    //now the derived destructor is called before base class destructor because of virtual
    return 0;
}
