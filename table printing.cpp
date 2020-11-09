
#include<iostream>
#include<conio.h>

using namespace std;
int main ()
{
     int i,a,fact;
     cout<<"enter any no. to print table";
     cin>>a;
     for(i=1;i<=10;i++)
    {
        fact=a*i;
    cout<<a<<"*"<<i<<"="<<fact<<endl;
    }

    getch();
}

