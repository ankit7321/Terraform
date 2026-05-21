#include<iostream>
using namespace std;

int main()
{
    float basic;
    float allowance;
    float deductation;
    float netsalary;

    cout<<"enter the basic salary";
    cin >>basic;
    cout<<"enter the percentage allowance";
    cin >>allowance;
    cout<<"enter the percentage deductation";
    cin >>deductation;

    netsalary= basic+basic*allowance/100-basic*deductation/100;

 
    cout<<"the net salary"<<netsalary;
    
    return 0;
}