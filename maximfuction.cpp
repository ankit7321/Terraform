#include <iostream>
#include <cstring>

using namespace std;

int maxin(int a, int b,int c)
{
if(a>b&&a>c)
return a;
else if (a>b)
return b;
else return c;
}
int main()
    {
         int x=58,y=55,z=89,d;
         d=maxin(x,y,z);
         cout<<d<<endl;

    return 0;
    }
