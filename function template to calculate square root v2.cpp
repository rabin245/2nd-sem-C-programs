//function template -> single argument
#include<iostream>
#include<math.h>
using namespace std;
template<class X>

void root(X a)
{
    cout<<"Square root = "<<sqrt(a)<<endl;
}
int main()
{
    root(2);
    root(9.5);
    root(48.52);
    root(25);
    return 0;
}
