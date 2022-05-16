#include<iostream>
using namespace std;
inline int area(int a, int b)
{
    return a*b;
}
int main()
{
    int l,b;
    cout<<"Enter length and breadth";
    cin>>l>>b;
    cout<<"Area = "<<area(l,b);
}
