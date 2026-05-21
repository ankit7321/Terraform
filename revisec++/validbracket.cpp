#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();

    int c=0;
    int t=0;
    for(int i=0; i<n; i++)
    {
      if(s[i]==40)
      c++;
      else
      c--;
      t=max(t,c);
    }
    for(int i=0;i<t;i++)
    {
        cout<<char(40);
    }
    for(int i=0;i<t;i++)
    {
        cout<<char(41);
    }
}