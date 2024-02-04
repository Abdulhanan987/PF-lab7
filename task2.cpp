#include<iostream>
using namespace std;
void generateFibonacci(int length);
main ()
{
    cout<<"Enter the length of the Fibanocci series:  ";
    int num;
    cin>>num;
    int n1 =0;
    int n2 =1;
    if (num==1)
    {
        cout<<n1;
    }
    if (num==2)
    {
        cout<<n1<<", "<<n2;
    }
    else {
    cout<<n1<<", "<<n2<<", ";
    generateFibonacci(num);  }
}
void generateFibonacci(int length)
{
    int num1=0;
    int num2=1;
    int sum = 0;
    for(int num = 1; num<=(length-2);num++ )
    {
        sum = num1 + num2;
           if (num==length-2)
           {
                  cout<<sum;
           }
           else{
         cout<<sum<<", ";
        num1 = num2;
        num2 = sum;
           }
        
        
        
        
    }
}