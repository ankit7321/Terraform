#include <iostream>
#include <string>

using namespace std;

int main()
    {
        string str;
        cout<<"Enter the word" "             "<<str;
        cin>>str;
                int vowels=0, consonent=0, space=0;

        for(int i=0;str[i]!='\0';i++)
        {
            if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            vowels++;
            else if (str[i]==' ')
            space++;
            else
            consonent++;
        }

        cout<<"vowels"<<vowels<<endl;
        cout<<"consonent"<<consonent<<endl;
        cout<<"space"<<space<<endl;

    
    return 0;
    }
