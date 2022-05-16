#include<iostream>#include<iostream>
using namespace std;
class length
{
    private:
        float feet,meter;
    public:
        length()      //default constructor
        {
            feet=10;
        }
        length(int x)   //parametrized constructor
        {
            feet=x;
        }
        void convert()
        {
            meter=0.3048*feet;
            cout<<endl<<"Length in meter = "<<meter;
        }

};
int main()
{
    length l1;
    length l2(1);
    l1.convert();
    l2.convert();
    return 1;
}
