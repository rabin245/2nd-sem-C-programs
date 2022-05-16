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
    cout<<endl<<"the GCD = "<<gcd(a,b);
}
