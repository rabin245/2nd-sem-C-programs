#include<iostream>
using namespace std;
int main()
{
    int A[10][10],B[10][10],i,j,temp,a,b;
    cout<<"Enter the numbers of rows and columns of Boolean matrices";
    cin>>a>>b;
    cout<<"Enter the elements of first Boolean matrix"<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Enter the elements of second Booleanmatrix"<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>B[i][j];
        }
    }
    cout<<endl<<"Matrix A:"<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"Matrix B:"<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<B[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"join of the matrix:"<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            temp=A[i][j]||B[i][j];
            cout<<temp<<"\t";
        }
        cout<<endl;
    }
}
