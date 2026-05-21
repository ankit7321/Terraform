#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,r,m,c,y, power;
    cout<<"Enter the no: ";
    cin>> n;
    m=n;
    c=0;
    while(n>0)
    {
        r=n%10;
        {
            c++;
        }
        n=n/10;
        power=int(pow(r,c));

    }
    power==y;
    if(y==m){
    cout<<"This is a amstrong no.";
    }
    else{
    cout<<"This is not a amstrong no.";
    }
    return 0;
}