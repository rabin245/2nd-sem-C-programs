#include<iostream>
using namespace std;
int func(int a, int n)
{
    if(n==0)
        return 1;
    else
        return (a*func(a,n-1));
}
int main()
{
    int a,n;
    cout<<"enter base and power";
    cin>>a>>n;
    cout<<endl<<"a^n = "<<func(a,n);
    return 0;
}
