

#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int a,r,c=1,b=0;
    cout<<"enter any no. ";
    cin>>a;
    while(a!=0)
    {
        r=a%2;
        a=a/2;
        b=b+r*c;
        c=c*10;
    }
    cout<<"the binary ="<<b;

    getch();
}
