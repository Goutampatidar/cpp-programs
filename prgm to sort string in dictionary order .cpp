
#include<iostream>
#include<conio.h>
#include<string.h>
#include<cstdio>
#include<stdlib.h>

using namespace std;

int main()
{
    int i,r,round;

    char a[5][10],b[10];
    cout<<"enter the five string";
    for(i=0; i<5; i++)
    {
        gets(a[i]);
    }
    for(round=1; round<5; round++)
    {
        for(i=0; i<5-round; i++)
        {
            r=strcmp(a[i],a[i+1]);
            if(r>0)
            {
                strcpy(b,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+10],b);
            }
        }
    }
    cout<<"string in order";
    for(i=0; i<5; i++)
        cout<<" "<<a[i];
    getch();
}
