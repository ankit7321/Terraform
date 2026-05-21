#include <bits/stdc++.h>
using namespace std;

int largeSmallSum(int *array, int n)
{
    int answer, i, j, temp;
    int even[n], odd[n];
    int evencount = 0, oddcount = 0;
    if(n<=3)
    {
        answer = 0;
    }
    else
    {
        even[0] = array[0];
        evencount = 1;
        for(i=1; i<n; i++)                   
        {
            if(i%2==0)
            {
                even[evencount] = array[i];
                evencount++;
            }
            else
            {
                odd[oddcount] = array[i];
                oddcount++;
            }  
        }
        
        sort(even, even + evencount);
        
        sort(odd, odd+oddcount);
        
        answer = even[evencount-2] + odd[oddcount-2];
    }
    return answer;
}
 
int main()
{
    int n, result, i;
    
    cin>>n;
    
    int array[n];
    
    for(i=0; i<n; i++)
    cin>>array[i];
    
    result = largeSmallSum(array, n);

    cout<<result;
    
    return 0;
}