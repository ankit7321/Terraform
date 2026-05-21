#include<iostream>
using namespace std ;
int main()
{
    int a,b,c;
    cout<<"Enter the no.";
    cin>>a>>b>>c;
    if((a>=b)&&(a>=c))
    cout<< a <<" is the greatest no.";
    else if ((b>=a)&&(b>=c))
    cout<< b <<" is the greatest no.";
    else if ((c>=a)&&(c>=b))
    cout<< c <<"is the greatest no.";
    return 0;
}