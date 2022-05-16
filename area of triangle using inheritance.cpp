//WAP to find area of a triangle using inheritance
#include<iostream>
using namespace std;
class triangle
{
    protected:
        float base, height;
    public:
        void getdata()
        {
            cout<<"Enter the base and height";
            cin>>base>>height;
        }
};

class area: public triangle
{
    private:
        float ar;
    public:
        void calc()
        {
            triangle::getdata();
            ar = 0.5*base*height;
            cout<<endl<<"Area = "<<ar;
        }
};
int main()
{
    area a1;
    a1.calc();
    return 0;
}
