#include<iostream>
using namespace std;
class prasmit
{
    private:
        int x;
    public:
        prasmit()
        {
            x=20;
        }
        friend class mamata;
};
class mamata
{
    public:
    void getdata(prasmit p)
    {
        cout<<"Value="<<p.x;
    }
};
int main()
{
    prasmit p1;
    mamata m1;
    m1.getdata(p1);
    return 1;
}
