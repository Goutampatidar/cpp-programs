#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int a,i,k,j,l;
    cout<<"enter any no.";
    cin>>a;
    for(i=1; i<=a; i++)
    {
        char b='A';
        for(j=i; j<=a; j++)
        {
            cout<<b<<"";
            b++;

        }
        b--;
        if(i==1)
            b--;

        for(k=3; k<2*i; k++)
        {
            cout<<" ";
        }
        if(i==1)
        {
            i++;

            for(l=i; l<=a; l++)
            {
                cout<<b;

  5              b--;

            }
            i--;
        }
        else
        {
            for(l=i; l<=a; l++)
            {
                cout<<b;
                b--;

            }
        }
        cout<<"\n";

    }

    getch();
}
