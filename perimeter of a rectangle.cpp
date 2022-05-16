#include<iostream>
using namespace std;
class rectangle
{
    private:
        int length;
        int breadth;
    public:
        void getdata();
        void showdata();
};  //end of class

void rectangle::getdata()       //outline member function
{
    cout<<"Enter length and breadth of the rectangle";
    cin>>length>>breadth;
}
void rectangle::showdata()      //outline member function
{
    int per;
    per=2*(length + breadth);
    cout<<"Perimeter of the rectangle = "<<per;
}

int main()
{
    rectangle r1;   //object of rectangle
    r1.getdata();
    r1.showdata();
}
