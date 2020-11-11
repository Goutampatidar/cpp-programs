#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int a,c;
    cout<<"enter any no. to check";
    cin>>a;
    c=(a/2);
    if(c*2==a)
    {
        cout<<"the given no. is even no.";

    }
    else
    {
        cout<<"the given is odd no.";
    }

    getch();
}
