//WAP to find area of triangle using friend class
#include<iostream>
using namespace std;
class peri
{
    private:
        float base,height;
    public:
        void getdata()
        {
            cout<<"Enter base and height";
            cin>>base>>height;
        }
        friend class area;
};
class area
{
    public:
        void show(peri p)
        {
            float area;
            area=0.5*p.base*p.height;
            cout<<endl<<"Area = "<<area;
        }
};
int main()
{
    peri p1;
    p1.getdata();
    area a1;
    a1.show(p1);
    return 1;
}
