#include<iostream>
using namespace std;

int main()
{
    int hour;

    cout<<"Enter the hour";
    cin>>hour;

    if(hour>=9  && hour<=18)
    {
        cout<<"This is working Hour";
    }
    else
    {
        cout<<"This is not working hour";
    }
    return 0;
}