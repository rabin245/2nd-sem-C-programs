#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number";
    cin>>a;
    try
    {
        if(a<0)
            throw a;
        else
            cout<<"Root = "<<sqrt(a);
    }
    catch(int c)
    {
        cout<<"Negative number root exception a = "<<c;
    }
}
