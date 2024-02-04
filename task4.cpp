#include<iostream>
using namespace std;
int frequencyChecker(int number, int
digit);
main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    cout<<"Enter the digit to check: ";
    int digit;
    cin>>digit;
    int result = frequencyChecker(num,digit);
    cout<<"Frequency: "<<result;

}
int frequencyChecker(int number, int
digit)
{   
     int x=0;
     int y =0;
     int a =0;
      
       while(number>0)
    {
        int n1 = number%10;
        int n2= number/10;
        number = n2;
        if(n1==digit)
        {
              a = a +1;
        }
        
    }
    return a;
}
