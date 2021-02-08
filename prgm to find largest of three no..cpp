
#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter three no.";
    cin>>a>>b>>c;
   // int d=INT_MIN;
    if(a>b)
    {
        if(c>a)
        {
            cout<<c<<"is the largest no.";
        }
        else

        {
            cout<<a<<"is largest no.";
        }
    }
    else
    {
        if(c>b)
        {
            cout<<c<<"is the largest no.";
        }
        else

        {
            cout<<b<<"is largest no.";
        }
    }
    getch();
}
