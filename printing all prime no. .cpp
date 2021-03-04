

#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int a,i;
    cout<<"enter the no.";
    cin>>a;
    for(i=2; a>1 ; i++)
    {
        while(a%i==0)
        {

            cout<<"  "<<i;
            a=a/i;
        }

    }
    getch();
}




