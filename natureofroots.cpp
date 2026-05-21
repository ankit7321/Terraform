#include"bits/stdc++.h"
using namespace std;

int main()
{
    float a,b,c,d,r1,r2;

    cout<<"Enter the no.";
    cin>>a>>b>>c;

    d=b*b-4*a*c;

    if(d==0)
    {
        cout<<"Roots are real and equal";
        cout<<(-b/(2*a));
    }
    else if (d>0)
    {
    cout<<"Roots are real and unequal";
    cout<<(-b+sqrt(d))/(2*a);
    cout<<(-b-sqrt(d))/(2*a);
    }
    else
    {
    cout<<"Roots are imaginary";
    }
    return 0;
}