
#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int x;
    for(x=0;x<=255;x++)
    {
        if(x%24==0)
        {

            getch();


        }
        cout<<" \n"<<"\t"<<char (x)<<" = "<< x;
    }

    getch();
}
