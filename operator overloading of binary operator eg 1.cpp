#include<iostream>
using namespace std;
class dist
{
    public:
        int feet,inch;

        dist()
        {
            feet=0;
            inch=0;
        }
        dist(int f, int i)
        {
            feet = f;
            inch = i;
        }
        dist operator *(dist d2)
        {
            dist d3;        //create an object to return

            d3.feet = feet * d2.feet;
            d3.inch = inch * d2.inch;

            return d3;
        }

};
int main()
{
    dist d1(8,9);
    dist d2(10,10);
    dist d3;
    d3 = d1 * d2;   //operator called
    cout<<"feet = "<<d3.feet<<endl;
    cout<<"inch = "<<d3.inch<<endl;
    return 1;
}
