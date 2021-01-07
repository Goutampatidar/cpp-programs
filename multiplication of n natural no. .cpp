
#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int a,mult=1,i,c;
    cout<<"enter the two no.from to which we should multiply";
    cin>>a>>c;
    for(i=a; i<=c; i++)
    {
        mult=mult*a;
        a++;
    }
    cout<<"multiplication ="<<mult;
    getch();
}

