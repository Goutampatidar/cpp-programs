
#include<conio.h>
#include<iostream>
int fib(int,int,int);

using namespace std;
int main()
{
    int a,b,c,d;
    b=0;
    c=1;
    cout<<"enter any no. greater than 1\n";
    cin>>a;
    d=fib(a,b,c);
    cout<<""<<d;
    getch();
}

int fib(int x,int b,int c)
{
    int a,d;
    a=b+c;
    if(x==2)
    {
        return(a);
    }
    b=c;
    c=a;
    d=fib(x-1,b,c);
    return(d);
}

