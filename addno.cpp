#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A[7]={2,5,2,8,9,9,7};
    int n=7,sum=0;
     for(int i=0;i<7;i++)
     {
         sum=sum+A[i];
     }
     cout<<"The sum is"<<sum;
     return 0;
}