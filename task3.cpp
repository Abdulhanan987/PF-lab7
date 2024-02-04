#include<iostream>
using namespace std;
void totalDigits(int number);
main()
{
    cout<<"Enter a number: ";
    int number;
    cin>>number;
    if (number==0)
    {
        cout<<"1";
    }
    else 
{
    totalDigits(number);
}
    
}
void totalDigits(int number)
{    int x=0;
     int y =0;
    while(number!=0)
    {
        number = number/10;
        x = x+1;
    }
    cout<<"Total number of Digits: "<<x;
}