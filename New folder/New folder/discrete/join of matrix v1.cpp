#include<iostream>
using namespace std;
int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,temp,a,b;
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
    cout<<"Enter the elements of second Boolean matrix"<<endl;
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
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(A[i][j]==1 || B[i][j]==1)
            {
                C[i][j]=1;
            }
            else
            {
                C[i][j]=0;
            }
        }
    }
    cout<<endl<<"join of the matrix:"<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }

}
