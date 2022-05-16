#include<iostream>
using namespace std;
int main()
{
    //char A[4]={'a','b','c','\0'},B[3]={'d','e','\0'};
    char A[20],B[20];
    int i,j,a,b;
    cout<<"Enter the no of elements in set A and B resp ";
    cin>>a>>b;
    cout<<"Enter the elements of first set";
    for(i=0;i<a;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the elements of second set";
    for(i=0;i<b;i++)
    {
        cin>>B[i];
    }
    cout<<"{";
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<"("<<A[i]<<","<<B[j]<<"),";//<<"\t";
        }
        //cout<<endl;
    }
    cout<<"}";
}
