#include<iostream>
using namespace std;
int main()
{
    int a,b,temp,r;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    if(b>a)
    {
        temp =a;
        a=b;
        b=temp;
    }
    do
        {
           r=a%b;
           a=b;
           b=r;
        }while(b>0);
    cout<<endl<<"the GCD = "<<a;
}
