#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter the age";
    cin>>age;

    if(age>=12  && age<=50)
    {
        cout<<"You are not eligible for offer";
    }
    else
    {
        cout<<"You are eligible for offer";
    }
    return 0;
}