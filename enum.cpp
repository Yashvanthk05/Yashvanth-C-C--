#include<iostream>
using namespace std;
enum accept {yes,no};
int main()
{
    accept in=yes;
    switch(in)
    {
    case yes:
        cout<<"User has Accepted";
        break;
    case no:
        cout<<"User has not Accepted";
        break;
    default:
        cout<<"Invalid";
        break;
    }
}
