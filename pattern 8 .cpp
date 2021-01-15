
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


        for(j=i; j>=1; j--)
        {
            cout<<" ";

        }

        if(i%2!=0)
        {
            if(a%2==0)
            {

                for(k=a; k>i ; k--)
                {
                    cout<<"* ";

                }
            }
            else
            {
                for(k=a; k>=i ; k--)
                {
                    cout<<"* ";

                }
            }
        }
        cout<<" \n";
    }
    getch();
}


