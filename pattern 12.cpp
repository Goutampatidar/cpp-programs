#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int n,i,j,k;
    cout<<"enter any even no. only";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i<=n/2)
        {
            for(j=i; j<=n/2; j++)
            {
                cout<<" ";

            }
        }
        else
        {
            for(j=n/2; j<i; j++)
            {
                cout<<" ";

            }
        }
        if(i<=n/2)
        {
            for(k=1; k<=i; k++)
            {
                cout<<"* ";
            }

        }
        else
        {
            for(k=i; k<n; k++)
            {
                cout<<" *";
            }

        }
        cout<<"\n";
    }

    getch();
}
