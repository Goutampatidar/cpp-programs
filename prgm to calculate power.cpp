#include<conio.h>
#include<iostream>

using namespace std;

int main()

{
    float a,b,p=1;
    int i;
    cout<<"enter the base and exponential respectively";
    cin>>a>>b;
    for(i=1;i<=b;i++)
    {
        p=p*a;
    }
    cout<<"power="<<p;
    getch();
}
