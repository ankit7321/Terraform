#include <iostream>
#include <cstring>

using namespace std;

int add(int x, int y)
{
return x+y;
}
float add(float x, float y)
{
    return x+y;
}
int add(int x, int y, int z)
{
    return x+y+z;
}

int main()
    {
         int a=12,b=5,c,d;
         c=add(a,b);
         cout<<c<<endl;
         float a=53.6,b=55.6,c;
         c=add(a,b);
         cout<<c<<endl;

    return 0;
    }
