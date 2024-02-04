#include<iostream>
#include<cmath>
#include<mapi.h>
using namespace std;
main()
{
    cout<<"Enter numbers count: ";
    int count;
    cin>>count;
     float round (float y,float z,float b,float c,float e);
    float y =0;
    float z=0;
    float b=0;
     float c=0;
   float  e=0;
    for(int x=1; x<=count; x++)
    
    {
        cout<<"Enter a number: ";
        int a;
        cin>>a;
        if (a>=1&&a<200)
        {
             y = y +1;
        }
        if(a>=200&&a<=399)
        {
             z = z+1;
        }
        if(a>=400&a<=599)
        {
            b = b+1;
        }
        if(a>=600&&a<=799)
        {
            c = c+1;
        }
        if(a>=800&a<=1000)
        {
                   e =e+1;
        }
        
         }
         y = (y/count)*100;
        z = (z/count)*100; 
        b = (b/count)*100; 
        c = (c/count)*100; 
        e = (e/count)*100;
         cout<<y<<"%"<<endl;
         cout<<z<<"%"<<endl;
         cout<<b<<"%"<<endl;
         cout<<c<<"%"<<endl;
         cout<<e<<"%";
}