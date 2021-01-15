#include<conio.h>
#include<iostream>


using namespace std;

int main()
{
    int a,k,j,i;

    cout<<"enter the odd no. ";
    cin>>a;
    if(a%2==0)
    {
        cout<<"try again and enter odd no.";
        return(0);
    }
    for(i=1; i<=a; i++)
    {
        int c=1;

        for(j=a; j>=i; j--)
        {
            cout<<" ";

        }

        if(i%2!=0)
        {
            for(k=1; k<=i; k++)
            {


                cout<<c<<" ";
                    if(i/2+1>k)
                {
                    c++;
                }
                else
                {
                    c--;
                }

            }

        }
        cout<<" \n";
    }
    getch();
}


