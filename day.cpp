#include<iostream>
using namespace std;

int main()
{
    int day;

    cout<<"Enter the no.";
    cin>>day;

    if(day==0)
    
        cout<<"Today is monday";

     else if(day==1)
    
        cout<<"Today is tuesday";
    
     else if(day==2)
    
        cout<<"Today is wednesday";
    
     else if(day==3)
    
        cout<<"Today is Thursday";
     else if(day==4)
    
        cout<<"Today is Friday";
     else if(day==5)
    
        cout<<"Today is Saturday";
     else if(day==6)
    
        cout<<"Today is Sunday";
     else  
        cout<<"Invalid no.";
    
    return 0;
}