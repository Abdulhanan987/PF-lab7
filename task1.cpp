#include<iostream>
using namespace std;
void printTable(int number);
main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
   printTable( num);
}
void printTable(int number)
{
    for(int x =1;x<=10; x=x+1)
    {    int y = x*number;
        cout<<number<<" x "<<x<<" = "<<y<<endl;;
    }
}