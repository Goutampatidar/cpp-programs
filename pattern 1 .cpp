
#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int a,j,i;
    cout<<"enter the no. ";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
    }
    cout<<"\n";
    }

    getch();
}

