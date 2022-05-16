#include<iostream>
using namespace std;
class student
{
    private:
        char name[20];
        char address[30];
    public:
        void getdata()
        {
            cout<<"Enter name and address";
            cin>>name>>address;
        }
        void putdata()
        {
            cout<<"Name "<<name<<endl;
            cout<<"Address "<<address<<endl;
        }
};
class undergrad: public student
{
    private:
        char faculty[5];
    public:
        void getrecord()
        {
            student::getdata(); //getdata()
            cout<<"Enter your faculty BBA, BScCSIT";
            cin>>faculty;
        }
        void display()
        {
            student::putdata();
            cout<<"Faculty "<<faculty<<endl;
        }
};
class graduate:public student
{
    private:
        char faculty[5];
        char thesis[8];
    public:
        void sgetrecord()
        {
            student::getdata(); //getdata()
            cout<<"Enter faculty MBA MSCSIT";
            cin>>faculty;
            cout<<"Enter thesis";
            cin>>thesis;
        }
        void view()
        {
            student::putdata();
            cout<<"Faculty "<<faculty<<endl;
            cout<<"Thesis "<<thesis<<endl;
        }
};
int main()
{
    undergrad u1;
    graduate g1;
    u1.getrecord();
    u1.display();
    g1.sgetrecord();
    g1.view();
    return 0;
}
