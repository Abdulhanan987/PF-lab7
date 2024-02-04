#include<iostream>
using namespace std;
int digitSum(int number);
main()
{
    cout<<"Enter a number: ";
    int number;
    cin>>number;
   int result = digitSum(number);
   cout<<"Sum of digits: "<<result;

}
int digitSum(int number)
{   
    int number1 =0;
    int a =0;

    while(number>0)
    {    number1 = number%10;
          a = a + number1;
          number = number/10;    
    }
    return a;
}