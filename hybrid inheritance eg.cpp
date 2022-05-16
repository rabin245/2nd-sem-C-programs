#include<iostream>
#include<conio.h>
using namespace std;
class personal
{
    private:
        char name[20];
        char address[25];
    public:
        void getdata()
        {
            cout<<"Enter Name and Address";
            cin>>name>>address;
        }
        void putdata()
        {
            cout<<"Name:\t\t"<<name;
            cout<<"\nAddress:\t"<<address;
        }

};
class p_record:public personal
{
    private:
        char qualification[10];
        char maritial[20];
    public:
        void getdata()
        {
            personal::getdata();
            cout<<"\nEnter qualification:";
            cin>>qualification;
            cout<<"Enter your Maritial status:";
            cin>>maritial;
        }
        void putdata()
        {
            personal::putdata();
            cout<<"\nQualification:\t "<<qualification;
            cout<<"\nMaritial Sts:\t"<<maritial;
        }
};
class official
{
    private:
        char office[20];
        char post[10];
    public:
        void getdata()
        {
            cout<<"\nEnter office Name:";
            cin>>office;
            cout<<"Enter your post:";
            cin>>post;
        }
        void putdata()
        {
            cout<<"\nOffice\t\t "<<office;
            cout<<"\nPost\t\t"<<post;
        }
};

class o_record:public p_record,public official
{
    public:
        void getdata()
        {
            p_record::getdata();
            official::getdata();
        }
        void putdata()
        {
            p_record::putdata();
            official::putdata();
        }
};
int main()
{
    o_record obj1;
    obj1.getdata();
    obj1.putdata();
    return 0;
}
