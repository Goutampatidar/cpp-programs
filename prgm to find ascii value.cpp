#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int  a;
    float b;
    char c;
    cout<<"enter integer, floating no. , and character respectively";
     fflush(stdout);
    cin>>a;
    fflush(stdout);
    cin>>b;
    fflush(stdout);
    cin>>c;
    cout<<"ascii value of given data ="<<int (a) <<"\n"<<int (b)<<"\n"<<int (c);
    getch();
}
