#include<iostream>
using namespace std;
int calculateGCD(int number1, int
number2);
int calculateLCM(int number1, int
number2, int gcd);
int result1;
main()
{   cout<<"Enter the first number: ";
int a;
cin>>a;
cout<<"Enter the second number: ";
int b;
cin>>b;
 result1=calculateGCD(a,b);
cout<<"GCD: "<<result1<<endl;
 int result2 = calculateLCM(a,b,result1);
cout<<"LCM: "<<result2;

}
int calculateGCD(int number1, int
number2)
{        int GCD=0;
         int a =0;
         int b =0;
         int x = 0;
   GCD = number2%number1;
   
      while(GCD!=0)
{       a = GCD;
         number2 = number1;
         GCD = number2%a;
            
          
}
 return a;
}


int calculateLCM(int number1, int
number2, int gcd)
{
     int LCM = (number1*number2)/result1;
     return LCM;
}