#include<iostream>
#include<conio.h>
using namespace std;
class degree
{
    private:
    float t;
    public:
    degree()    //constructor
    {
        t=0;
    }

    void get()
    {
        cout<<"\nEnter value of temperature in celsius";
        cin>>t;
    }
    void show()
    {
        cout<<endl<<"temperature in celsius = "<<t;
    }
};//end of class

int main()
{
    degree c1;  //constructor call
    c1.show();
    c1.get();
    c1.show();
    return 0;
}
