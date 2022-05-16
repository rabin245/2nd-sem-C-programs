#include<iostream>
using namespace std;
class temp
{
    public:
        int x;

        temp()
        {
                x=3;
        }
        void reveal()
        {
            cout<<"\nThe address of the object is: "<<this<<endl;
            cout<<this->x<<endl;
        }
};
int main()
{
    temp t1,t2;
    t1.reveal();
    t2.reveal();
}
