#include<iostream>
using namespace std;
class student_name
{
    private:
        char name[20];
    public:
        void student_getdata()
        {
            cout<<"Enter name";
            cin>>name;
        }
        void student_putdata()
        {
            cout<<"\nName: "<<name;
        }
};
class student_address
{
    private:
        char address[20];
    public:
        void student_getdata()
        {
            cout<<"Enter address";
            cin>>address;
        }
        void student_putdata()
        {
            cout<<"\nAddress: "<<address;
        }
};
class student_record: public student_name, public student_address
{
    public:
        void getdata()
        {
            student_name::student_getdata();
            student_address::student_getdata();
        }
        void putdata()
        {
            student_name::student_putdata();
            student_address::student_putdata();
        }
};
int main()
{
    student_record obj1;
    obj1.getdata();
    obj1.putdata();
    return 1;
}
