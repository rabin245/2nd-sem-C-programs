#include<iostream>
#include<conio.h>
using namespace std;
class sharma_company
{
    private:
        char name[20];
    public:
        void getdata()
        {
            cout<<"\nEnter your name";
            cin>>name;
        }
        void putdata()
        {
            cout<<"\nName: "<<name;
        }

};
class company_address: public sharma_company
{
    private:
        char address[30];
    public:
        void getdata()
        {
            sharma_company::getdata();
            cout<<"\nEnter your address";
            cin>>address;
        }
        void putdata()
        {
            cout<<"\nFor class company_address";
            sharma_company::putdata();
            cout<<"\nAddress: "<<address;
        }
};
class company_library: public sharma_company
{
    private:
        float member_fee;
    public:
        void getdata()
        {
            sharma_company::getdata();
            cout<<"\nEnter mamber fee ";
            cin>>member_fee;
        }
        void putdata()
        {
            cout<<"\nFor class company_library";
            sharma_company::putdata();
            cout<<"\nMember fee: "<<member_fee;
        }
};
class company_account: public sharma_company
{
    private:
        float salary;
    public:
        void getdata()
        {
            sharma_company::getdata();
            cout<<"\nEnter salary ";
            cin>>salary;
        }
        void putdata()
        {
            cout<<"\nFor class company_account";
            sharma_company::putdata();
            cout<<"\nSalary: "<<salary;
        }
};
int main()
{
    company_address obj1;
    company_library obj2;
    company_account obj3;
    obj1.getdata();
    obj1.putdata();

    obj2.getdata();
    obj2.putdata();

    obj3.getdata();
    obj3.putdata();

}
