#include<iostream>
using namespace std;
class parent
{
    protected:
    int income;
};      //end of class parent

class child:public parent
{
    private:
    int bill_amount;
    public:
    void get()
    {
        cout<<"Enter the income";
        cin>>income;
        cout<<"Enter the bill amount";
        cin>>bill_amount;
    }
    void show()
    {
        cout<<"Details are";
        cout<<endl<<"Income = "<<income;
        cout<<endl<<"Expense = "<<bill_amount<<endl;
    }
};      //end of class child

int main()
{
    child c1,c2;
    c1.get();
    c1.show();
    c2.get();
    c2.show();
    return 0;
}
