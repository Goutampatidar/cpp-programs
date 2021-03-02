#include<time.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
    int c,i,j,min,max;
    cout<<"enterr any min. no";
    cin>>min;
    cout<<"enter any max no.";
    cin>>max;
   // l=max-min;         program not working on some no.
    int a[10];
    srand(time(0));
    for(i=0; i<10; i++)
    {
        c=rand()%10;
        c=c+min;

        for(j=0; j<i; j++)
        {
            if(c==a[j])
                break;
        }
        if(i==j)
        {
            a[i]=c;
        }
        else
        {
            i--;
        }
    }
    for(i=0; i<10; i++)
        cout<<a[i]<<endl;;
    getch();
}

