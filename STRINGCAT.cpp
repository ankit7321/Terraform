#include <iostream>
#include <cstring>

using namespace std;
 
int main()
{
    char s1[20]="Good";
    char s2[20]="Morning";

    strncat(s1,s2,3);

    cout<<s1;

    return 0;

}