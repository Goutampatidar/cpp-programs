
#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int n,i,j;
    cout<<"enter any even no. only";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i<=n/2)
        {
            for(j=1; j<=i; j++)
            {
                cout<<"*";

            }
        }
        else
        {
            for(j=i; j<n; j++)
            {
                cout<<"*";

            }
        }
        cout<<"\n";
    }
    getch();
}
