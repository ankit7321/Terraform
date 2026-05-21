#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    string email;
    cout<<"enter the email "<<email;
    cin>>email;

    int i=(int)email.find('@');
    string uname =email.substr(0,i);
    cout<<"User Name is "<<uname<<endl;
    return 0;
}