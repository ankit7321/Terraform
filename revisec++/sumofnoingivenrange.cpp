#include<iostream>
using namespace std;
int main()
{
    int num1 , num2;
    cout<<"enter the nos.";
    cin>> num1>>num2;
    int sum = 0;
    for (int i = num1; i <= num2; i++)
        sum = sum + i;
    cout << sum;
    return 0;
}