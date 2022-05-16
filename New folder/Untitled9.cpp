#include<iostream>
using namespace std;
class parent
{
    protected:
    int num;
};      //end of class parent

class child:public parent
{
    private:
    int mull;
    public:
    void get()
    {
        cout<<"Enter the multiplier";
        cin>>mull;
        cout<<"Enter the number";
        cin>>num;
    }
    void show()
    {
        cout<<"Multiplication: "<<num<<"X"<<mull<<"="<<num*mull;
    }
};      //end of class child

int main()
{
    child c1;
    c1.get();
    c1.show();
    return 0;
}
