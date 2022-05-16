#include<iostream>
using namespace std;
class currency
{
    private:
        int rupees, paisa;
    public:
        currency()      //default constructor
        {
            rupees = 10;
            paisa = 75;
        }
        void input()
        {
            cout<<"Enter money in rupees and paisa";
            cin>>rupees>>paisa;
        }
        void output(currency c1,currency c2);
};
void currency::output(currency c1,currency c2)
        {
            int temp;
            temp=c1.paisa+c2.paisa;
            paisa=temp%100;
            temp=temp/100;
            rupees=temp+ c1.rupees + c2.rupees;
            cout<<endl<<"Rupees = "<<rupees;
            cout<<endl<<"Paisa = "<<paisa;
        }
int main()
{
    currency c1;
    currency c2;
    c2.input();
    currency c3;
    c3.output(c1,c2);
}
