#include<iostream>
using namespace std;
class func
{
    private:
        int n;
    public:
        void get()
        {
            cout<<"Enter a number";
            cin>>n;
        }
        void show()
        {
            cout<<endl<<"n = "<<n;
        }
};
int main()
{
    func f1;
    f1.get();
    f1.show();
    return 0;
}
