
#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    int a,k,j,i;
    cout<<"enter the no. ";
    cin>>a;
    for(i=a; i>=1; i--)
    {

        for(j=a; j>=i; j--)
        {
            cout<<" ";
        }
        for(k=i; k>=1 ; k--)
        {
            cout<<"* ";

        }

        cout<<" \n";
    }

    getch();
}

