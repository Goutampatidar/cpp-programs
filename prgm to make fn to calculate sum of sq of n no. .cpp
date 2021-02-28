#include<conio.h>
#include<iostream>

using namespace std;
void sum(int);

int main()
{
    int a;
    cout<<"enter any no.";
    cin>>a;
    sum(a);
    getch();
}
void sum(int x)
{
  int i, sum=0;
    for(i=1; i<=x; i++)
    {
        sum=sum+(i*i);
    }
    cout<<"sum="<<sum;
}
