#include"bits/stdc++.h"
using namespace std;

int main()
{
    float m1,m2,m3,total,avg;

    cout<<"Enter the marks.";
    cin>>m1>>m2>>m3;

    total=m1+m2+m3;
    avg=total/3;

    if(avg>=60)
    {
        cout<<"You got A grade";
    }
    else if (avg>=35&&avg<60)
    {
    cout<<"You got B grade";
    }
    else
    {
    cout<<"You got C grade";
    }
    return 0;
}