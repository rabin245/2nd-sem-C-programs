//WAP to find the factorial of a given number using inheritance
#include<iostream>
using namespace std;
class number
{
    protected:
        int n;
    public:
        void getdata()
        {
            cout<<"Enter a number";
            cin>>n;
        }
};
class fact: public number
{
    private:
        int i,r=1;
    public:
        void calc()
        {
            getdata();
            for(i=n;i>1;i--)
            {
                r*=i;
            }
        }
        void show()
        {
            cout<<"Factorial of "<<n<<" = "<<r;
        }
};
int main()
{
    fact f1;
    f1.calc();
    f1.show();

}
