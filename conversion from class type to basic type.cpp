#include<iostream>
using namespace std;
class data
{
    int x;
    float f;
    public:
        data()
        {
            x=2.2;
            f=3.23;
        }
        operator int()  //conversion function
        {
            return x;
        }
        operator float()    //conversion function
        {
            return f;
        }
};
int main()
{
    int j;      //int variable
    float f;    //float variable
    data a;     //object of class data-class type
    j=a;
    f=a;
    cout<<"Value of j = "<<j<<endl;
    cout<<"value of f = "<<f<<endl;
    return 0;
}
