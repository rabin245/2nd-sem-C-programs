#include<iostream>
using namespace std;
inline int area(int l, int b)
{
    int a;
    a=l*b;
    return a;
}
int main()
{
    int l,b;
    cout<<"Enter the length and breadth";
    cin>>l>>b;
    cout<<"Area of the rectangle = "<<area(l,b);
    return 0;
}
