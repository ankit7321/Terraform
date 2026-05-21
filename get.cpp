#include<iostream>
using namespace std; 

int main()
{
    char S[100];
    char S2[100];
    cout<<"Enter your name ";
    cin.get (S,100);

    cout<<"Welcome "<<S<<endl;
     
    cin.ignore();

    cout<<"Enter your name Again ";
    cin.get (S2,100);
    
    cout<<"Welcome "<<S2<<endl;
    return 0;
}
