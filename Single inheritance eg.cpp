#include<iostream>
using namespace std;
class Baseclass
{
    protected:
        int num;
};
class Derivedclass: public Baseclass
{
    public:
        void getdata()
        {
            cout<<"Ener a number";
            cin>>num;
        }
        void putdata()
        {
            cout<<"\nIncremented value "<<++num;
        }
};
int main()
{
    Derivedclass d1;
    d1.getdata();
    d1.putdata();
    return 1;
}
