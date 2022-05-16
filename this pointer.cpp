#include<iostream>
using namespace std;
class address
{
    public:
        int roll,r;

        address()
        {
                roll=10;
                r=4;
        }
        void reveal()
        {
            cout<<"\nThe address of the object is: "<<this<<endl;
            cout<<this->roll<<endl<<this->r<<endl;
            cout<<"\nThe address of the object is: "<<this<<endl;
        }
};
int main()
{
    address a1,a2;
    a1.reveal();
    cout<<"roll = "<<a1.roll<<endl;
    a2.reveal();
    cout<<"roll = "<<a2.roll<<endl;
}
