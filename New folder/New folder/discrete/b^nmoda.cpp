#include<iostream>
using namespace std;
int func(int b, int n)
{
    if(n==0)
        return 1;
    else
        return (b*func(b,n-1));
}
int remainder(int r, int a)
{

    if(r>=a)
        return remainder(r-a,a);
    else
        return r;
}
int main()
{
    int a,n,b,r;
    cout<<"b^n mod a"<<endl;
    cout<<"enter values of b,n and a resp";
    cin>>b>>n>>a;
    r=func(b,n);
    cout<<"Result = "<<remainder(r,a);


    return 0;
}
