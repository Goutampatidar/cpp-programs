#include<iostream>
#include<conio.h>
int sum(int,int);
int rem(int);

using namespace std;

int main()
{
    int n,a,add=0;
    cout<<"enter any no.";
    cin>>n;
    a=sum(n,add);
    cout<<a;
    getch();
}
int sum(int n,int add)
{
    int r;
    if(n==0)
    {
        return(add);
    }
    r=rem(n);
    n=n/10;
    add=add+r;
    sum(n,add);
   // return(add);
}
int rem(int n)
{ int r;
    r=n%10;
    return(r);

}
