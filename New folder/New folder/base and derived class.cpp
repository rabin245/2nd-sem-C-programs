#include<iostream>
using namespace std;
class base      //parent class
{
    private:
        char name[20];
    public:
        void get()
        {
            cout<<"Enter name";
            cin>>name;
        }
        void show()
        {
            cout<<"Name : "<<name<<endl;
        }
};
class drv: public base      //child class
{
    private:
        char address[20];
    public:
        void getdata()
        {
            get();
            cout<<"Enter your address";
            cin>>address;
        }
        void showdata()
        {
            base::show();
            cout<<"address : "<<address;
        }

};
int main()
{
    drv d1;
    d1.getdata();
    d1.showdata();
}
