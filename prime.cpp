#include<iostream>
using namespace std;

int main()
{
    int n,i,count=0;
    cout<<"enter the value of n ";
    cin>>n;

    for (i=1;i<=n;i++)
    {
      if(n%i==0)
     {
         count++;
     }
    }
    if(count==2)
    cout<<"This is prime no.";
    else 
    cout<<"This is not a prime no.";
    return 0;
}