#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	int m;
	cin>>m;
	string str;
	cin>>str;
	int count =0;
	for(int i=0;i<m;i++)
	{
		if(str[i]=='M')
		{
			count++;
		}
	}
	int count2 = m-count;
	if(count>count2)
    {
		cout<<"Nutan";
	}
	else
	{
		cout<<"Tusla";
	}
	return 0;
}