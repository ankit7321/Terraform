#include<iostream>
using namespace std;

int main ()
{
    int count=0;
    for(int i=0; i<=5; i++)
    {
        for(int j=0; j<=5; j++)
    {
        if(i+j>4)
    cout<<"*";
    else
    cout<<" ";
    count++;
    }
    cout<<endl;
    }

    return 0;
}