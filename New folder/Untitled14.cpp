#include<iostream>
#include<string.h>

using namespace std;
void reverseit(char s[100])
{
    int i,l;
    char temp;
    l=strlen(s);
    int j=l-1;
    for (i=0;i<l/2;i++)
    {
        temp = s[j];
        s[j]= s[i];
        s[i]=temp;
        j--;
    }
    //s[i]='\0';
    cout<<s;
}
int main()
{
    char st[100];
    cout<<"Enter a string";
    cin>>st;
    reverseit(st);
    return 0;
}
