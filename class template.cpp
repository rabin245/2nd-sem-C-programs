#include<iostream>
using namespace std;
template<class T1, class T2>
class Test
{
    private:
        T1 a;
        T2 b;
    public:
        Test(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void show()
        {
            cout<<a<<" and "<<b<<endl;
        }
};
int main()
{
    Test <float,int> t1(2.5,10);
    Test <int,char> t2(120,'W');
    t1.show();
    t2.show();
}
