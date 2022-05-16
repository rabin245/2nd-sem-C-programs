#include<iostream>
using namespace std;
int fibo(int);
int main()
{
    int i,n;
    cout<<"Enter the no of terms in the fibonacci series";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<fibo(i)<<"\t";
    }
    return 0;
}
int fibo(int num)
{
    if(num==0 || num==1)
    {
        return num;
    }
    else
    {
        return (fibo(num-1) + fibo(num-2));
    }
}

