

#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    int a,i,b;
    cout<<"enter the no. of values";

    cin>>a;

    int d=INT_MIN;

    cout<<"enter the no.";

    for(i=1; i<=a; i++)
    {
        cin>>b;
        if(d<b)
        {
            d=b;
        }

    }
    cout<<d<<"is the largest no. of all";
    getch();
}
