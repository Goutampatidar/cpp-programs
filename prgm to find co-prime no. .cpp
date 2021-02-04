
#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int a,b,c,i ;
    cout<<"enter any two no.";
    cin>>a>>b;
    (a>b)?c=b:c=a;
    for(i=2;i<=c;i++)
    {

    if(a%i==0 && b%i==0)
    {
     break;
    }
    }
    if(i==c+1)
        cout<<"no. are co prime numbers";
    else
        cout<<"no. are not co prime numbers ";


    getch();
}

