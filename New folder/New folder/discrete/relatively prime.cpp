#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int temp,r;
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
    return a;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    if(gcd(a,b)==1)
    {
        cout<<endl<<"The numbers "<<a<<" and "<<b<<" are relatively prime";
    }
    else
    {
        cout<<endl<<"The numbers are not prime";
    }
}
