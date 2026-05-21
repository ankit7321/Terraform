#include <iostream>
#include <string>

using namespace std;

int main()
    {
        string str ="hello world";

        for(int i=0;str[i]!='\0';i++)
        {
            str[i]=str[i]-32;
        }

        cout<<str<<endl;
    
    return 0;
    }
