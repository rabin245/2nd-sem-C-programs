#include<iostream>
#include<math.h>
using namespace std;
template <class S>
S sqroot (S x)
{
    S root;
    root=sqrt(x);
    return root;
}
int main()
{
    int a=4,r1;
    float b=8.4,r2;
    double c=7.899,r3;
    r1=sqroot<int>(a);
    r2=sqroot<float>(b);
    r3=sqroot<double>(c);
    cout<<"Square root of int = "<<r1<<endl;
    cout<<"Square root of float = "<<r2<<endl;
    cout<<"Square root of double = "<<r3<<endl;
    return 0;
}
