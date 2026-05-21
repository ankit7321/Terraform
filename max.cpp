#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A[7]={2,3,6,7,5,9,8};
    int n=7,max;
    max=A[0];
     for(int i=0;i<7;i++)
     {
         if(A[i]>max)
         {
             max=A[i];
         }

     }
     cout<<"The maximum value is"<<max;
     return 0;
}