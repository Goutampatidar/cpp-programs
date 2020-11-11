
#include<math.h>
#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int a,r,b=0,i;
    cout<<"enter any  binary no. ";
    cin>>a;
    for(i=0;a!=0;i++)
    {
        r=a%10;
        a=a/10;
        b=b+r*pow(2,i);

    }
    cout<<"the decimal no.  ="<<b;

    getch();
}

