#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter the no.";
    cin>>a>>b>>c;

    if(a>b&&a>c)
    
        cout<<"the no is"<<a;
    
    else if(b>c)
    
        cout<<"the no is"<<b;
    

        else
            cout<<"the no is"<<c;
    
    return 0;
}