#include<iostream>
using namespace std;
class patient
{
        protected:
            char patid[5];
            char name[15];
        public:
            void getdata()
            {
                cout<<"Enter patid ";
                cin>>patid;
                cout<<"Enter Name: ";
                cin>>name;
            }
            void putdata()
            {
                cout<<patid<<endl<<name;
            }
};
class ward:public patient
{
        private:
            int wardno;
            int bedno;
        public:
            void getdata()
            {
                patient::getdata();
                cout<<"Enter wardno and bedno: ";
                cin>>wardno>>bedno;
            }
            void putdata()
            {
                patient::putdata();
                cout<<endl<<wardno<<endl<<bedno;
            }
};
class payment:public ward
{
        private:
            float  amount;
        public:
            void getdata()
            {
                ward::getdata();
                cout<<"Enter Amount: ";
                cin>>amount;
            }
            void putdata()
            {
                //patid=200;
                ward::putdata();
                cout<<endl<<amount;
            }
};
int main()
{
   payment obj1;
   obj1.getdata();
   obj1.putdata();
}
