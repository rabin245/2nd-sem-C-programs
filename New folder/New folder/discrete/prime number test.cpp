#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter a number";
    cin>>num;
    for(i=2;i<num;i++)
        {
            if(num%i==0)
                {
                    cout<<"\nComposite number";
                    break;
                }
        }
    if(i==num)
        {
            cout<<"\nPrime Number.";
        }
}
