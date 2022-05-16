#include<iostream>
using namespace std;
class currency
{
    private:
    int rs;
    int ps;
    public:
    void entry()
    {
        cout<<"Enter money in rupees and paisa";
        cin>>rs>>ps;
    }
    void display();
};
void currency::display()
{
    float x;
    float y;
    x=0.01*ps;
    y=rs+x;
    cout<<"Currency in rupees "<<y;
}
int main()
{
    currency c1;
    c1.entry();
    c1.display();
}
