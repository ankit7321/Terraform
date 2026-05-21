#include<iostream>
using namespace std;

int main ()
{
    int count=0;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
    {
        if(i>j)
    cout<<" ";
    else
    cout<<"*";
    count++;
    }
    cout<<endl;
    }

    return 0;
}