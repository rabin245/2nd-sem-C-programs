#include<iostream>
using namespace std;
template <class T>
T getmax (T a, T b)
{
    T max;
    if (a>b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}
int main()
{
    int x=3,y=6,k;
    float m=3.4,n=2.8,p;
    double c=1.0, d=8.45,e;
    k=getmax<int>(x,y);
    p=getmax<float>(m,n);
    e=getmax<double>(c,d);
    cout<<"Maximum integer: "<<k<<endl;
    cout<<"Maximum float: "<<p<<endl;
    cout<<"Maximum double: "<<e<<endl;
    return 0;
}
