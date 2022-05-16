#include<iostream>
using namespace std;
class dist
{
    private:
        int rs;
    public:
        void get()
        {
            cout<<"Enter rupees"<<endl;
            cin>>rs;

        }
        int operator < (dist d2)
        {
            if(rs<d2.rs)
            {
            return 1;
            }
            else
            {
                return 0;
            }

        }
        void show()
        {
            cout<<"Rs = "<<rs<<endl;
        }
};
int main()
{
    dist d1,d2;
    d1.get();
    d2.get();
    cout<<"d1 First distance:"<<endl;
    d1.show();
    cout<<"d2 Second distance:"<<endl;
    d2.show();

    if (d1<d2)
    {
         cout<<"d2 is greater";
    }
    else
    {

        cout<<"d1 is greater";
    }
            return 0;
}
