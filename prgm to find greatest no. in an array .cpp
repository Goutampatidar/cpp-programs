#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int n,b,i,j;
    cout<<"enter any no.";
    cin>>n;
    int a[n];
    cout<<"enter n no. of value";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    b=a[0];
    for(j=0; j<n; j++)
    {
        if(b<a[j])
        {
            b=a[j];
        }
    }
    cout <<"\n"<<"the greatest no. "<<b;
    getch();
}

