#include<conio.h>
#include<iostream>a

using namespace std;
int nat(int,int);

int main()
{
    int a,b=0,c;
    cout<<"enter nay no.";
    cin>>a;
    nat(b, a);

    getch();
}
int nat(int a,int n)
{

        if(n==0)
        {
          return(a);
        }
       a=a +1;
       cout<<a;
    nat(a,n-1);

}
