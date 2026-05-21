#include<iostream>
using namespace std;

int main()
{
    int option;
    cout<<"Enter option"<<endl;
    cout<<"1.addition \n"<<"2.subtration \n"<<"3.divion \n"<<"4.multiplication \n"<<endl;
    cin>>option;
    float a,b,c;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    switch(option)
    {
        case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
        case 3:c=a/b;
        break;
        case 4:c=a*b;
        break;
    }
    cout<<"print the value"<<c;
}