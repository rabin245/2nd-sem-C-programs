#include<iostream>
using namespace std;
main()
{
    int i,j,k,x,y1,y2,y,z,a[10][10],b[10][10],sum=0,m[10][10];
    cout<<"Enter the rows and column of first Boolean matrix";
    cin>>x>>y1;
    cout<<"Enter the rows and column of second Boolean matrix";
    cin>>y2>>z;
    if(y1==y2)
    {
       y=y1;
    }
    else
    {
        cout<<"Multiplication cannot be done"<<endl;
        goto exit;
    }
    cout<<"Enter the elements\n";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<"a"<<i+1<<j+1;
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements\n";
    for(i=0;i<y;i++)
    {
        for(j=0;j<z;j++)
        {
            cout<<"b"<<i+1<<j+1;
            cin>>b[i][j];
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<z;j++)
        {
            sum=0;
            for(k=0;k<y;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            m[i][j]=sum;
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<z;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }

exit: cout<<"Open the program again with suitable inputs";
}
