#include<iostream>
using namespace std;
int main()
{
    int i,n,prev=0,a=1,next;
    cout<<"Enter the no of terms in the fibonacci series";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<prev<<"\t";
        next=prev+a;
        prev=a;
        a=next;
    }
    return 0;
}
