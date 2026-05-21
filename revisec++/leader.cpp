#include <iostream>
using namespace std;
int main()
{
    int n, s,j;
    cin >> n;
    int arr [n];
    for(int i=0 ; i<n ; i++)
    cin >> arr [i];
    for (int i=0; i<n; i++ )
    {
        for(int j=i+1; j<n; j++){

        if(arr[i]<arr[j])
        break;
        }
    if(j==n)
    s=s+arr[i];
    }  
    cout << s; 
}