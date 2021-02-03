#include<iostream>
#include<conio.h>
#include<string.h>
#include<cstdio>
#include<stdlib.h>

using namespace std;

int main()
{
    int i,d;
    char c;
    char a[50],b[50];
    cout<<"enter the string";
    gets(a);
    strcpy(b,a);
    for(i=0; i<=strlen(a); i++)
    {
        cout<<" "<<a[i];

    }
    d=strlen(a);
    for(i=0; i<=d/2; i++)
    {
     if(a[i]!=a[d-1-i])
    {
       // cout<<a[i]<<"*"<<a[d-1-i];
        cout<<"\nstring is not palindrom";
        exit(0);
    }
}
cout<<" string is palindrom";

    getch();
}
