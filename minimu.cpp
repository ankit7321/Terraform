#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A[]={1,5,8,6,7,3,5,5};
    int min=A[0];
    
    for(int x:A)
    {
        if(x<min)
            min=x;
    }
    cout<<min;
}