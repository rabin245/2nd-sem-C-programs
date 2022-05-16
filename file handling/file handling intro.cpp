#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("ITEM");
    cout<<"Enter item name";
    char name[30];
    cin>>name;
    outfile<<name<<endl;
    cout<<"Enter item cost";
    float cost;
    cin>>cost;
    outfile<<cost<<endl;
    outfile.close();

    ifstream infile("ITEM");
    infile>>name;
    infile>>cost;
    cout<<"Item name";
    cout<<name<<endl;
    cout<<"Item cost";
    cout<<cost<<endl;
    infile.close();
    return 0;
}
