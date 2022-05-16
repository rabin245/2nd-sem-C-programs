#include<iostream>
using namespace std;
class department
{
    private:
        int did;
        char name[20];
        char address[20];
    public:
        void get()
        {
        cout<<"Enter your id";
        cin>>did;
        cout<<"Enter your name and address";
        cin>>name>>address;
        }
        void show()
        {
            cout<<"ID: "<<did;
            cout<<endl<<"Name: "<<name;
            cout<<endl<<"Address: "<<address;
        }
};
class employee: public department
{
    private:
        int salary;
    public:
        void egetdata()
        {
            get();  //department::get();
            cout<<"Enter your salary";
            cin>>salary;
        }
        void eshow()
        {
            show();
            cout<<endl<<"Salary: "<<salary;
        }
};
class customer: public department
{
    private:
        int bill;
    public:
        void cget()
        {
            get();
            cout<<"Enter your bill";
            cin>>bill;
        }
        void cshow()
        {
            show();
            cout<<endl<<"Bill: "<<bill;
        }
};
int main()
{
    customer c1;
    c1.cget();
    c1.cshow();
    employee e1;
    e1.egetdata();
    e1.eshow();
}
