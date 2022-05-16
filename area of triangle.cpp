#include<iostream>
using namespace std;
class area
{
    private:
        float b;
        float h;
        float a;
    public:
        area()
        {
            h=1.2;
        }

    void get()
    {
        cout<<"Enter value of base";
        cin>>b;
    }
    void show()
    {
        a=(b*h)/2;
        cout<<"Area of the triangle = "<<a;
    }
};
int main()
{
    area a1;
    a1.get();
    a1.show();
    return 0;
}
