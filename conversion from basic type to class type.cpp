#include<iostream>
using namespace std;
class converter
{
    private:
        int meter;
    public:
        converter()
        {

        }
        converter (float k)
        {
            meter = k*1000;
        }
        void display()
        {
            cout<<"Meter = "<<meter<<endl;
        }
};
int main()
{
    converter c1;
    float km;
    cout<<"Enter distance in km";
    cin>>km;
    c1=km;
    c1.display();
    return 0;
}
