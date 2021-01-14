

#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int a,j,i;
    cout<<"enter the no. ";
    cin>>a;
    for(i=a;1<=i;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
    }
    cout<<"\n";
    }

    getch();
}

