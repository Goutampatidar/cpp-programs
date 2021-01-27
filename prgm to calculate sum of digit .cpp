
#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int a,r=0,i,c;
    cout<<"enter the no.";
    cin>>a;
    while(a!=0)

    {
        c=a%10;
        a=a/10;
        r=r+c;

    }
    cout<<"sum of digit ="<<r;
    getch();
}




