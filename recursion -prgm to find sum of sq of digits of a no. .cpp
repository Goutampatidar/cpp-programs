#include<iostream>
#include<conio.h>

using namespace std;

int sum(int,int);
int rem(int);
int main()
{
    int a,b=0;
    cout<<"enter any no.";
    cin>>a;
    cout<<sum(a,b);
    getch();

}
int sum(int n,int add)
{
    int r;
    if(n==0)
        return(add);
      r=rem( n);
    add=add+r*r;
    n=n/10;
    sum(n,add);
}
int rem(int n)
{
    int r;
    r=n%10;
    return(r);
}
