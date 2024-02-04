#include<iostream>
using namespace std;
int calculateMoney(int age, int price, int unitprice);
main()
{
    cout<<"Enter Lilly's age: ";
    int age;
    cin>>age;
    cout<<"Enter the price: ";
    int price;
    cin>>price;
    cout<<"Enter the unit price: ";
    int unitprice;
    cin>>unitprice;
int result = calculateMoney(age,price,unitprice);
     if (result>=price)
     {
        result = result - price;
        cout<<"Yes"<<endl;
        cout<<result;
     }
     if (result <price)
     {
        result = price - result;
        cout<<"No!"<<endl;
        cout<<result;
     }
}
int calculateMoney(int age, int price, int unitprice)
{   int x =0;  int y=0;  int a = 0; int b =0; int c =0; int d =0; int e =0;
    for(int n = 1; n<=age; n++)
    {
        x = n%2;
        if(x==0)
        {               
            y = (y + 1);
            e = (y*10)+e;
        }
        if (x!=0)
        {
           a = a + 1;
        }
             b = e -y;
             c = a *unitprice;
             d  = b+c;
    }
    return d;
}