#include<iostream>
using namespace std;
class triangle
{
    protected:
        int base;
    public:
        void get()
        {
            cout<<"Enter the base";
            cin>>base;
        }
};
class area: public triangle
{
    private:
        int height;
    public:
        void get()
        {
            triangle::get();
            cout<<endl<<"Enter the height";
            cin>>height;
        }
        void disp()
        {
            int area;
            area = 0.5*base*height;
            cout<<endl<<"Area = "<<area;
        }
};
int main()
{
    area a1;
    a1.get();
    a1.disp();
    return 0;
}
