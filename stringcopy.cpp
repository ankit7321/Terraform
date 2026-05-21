#include <iostream>
#include <cstring>

using namespace std;
 
int main()
{
    char s1[20]="GoodMorning";
    char s2[20]=" ";

    strncpy(s2,s1,5);

    cout<<s2;

    return 0;

}