#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int n,sum1=0,sum2=0,i,j;
cout<<"enter any no.";
cin>>n;
int a[n];
cout<<"enter n no. of value";

for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(j=0;j<n;j++)
{
    if(a[j]%2==0)
{
    sum1=sum1+a[j];
}
else{
    sum2=sum2+a[j];
}
}
cout<<"even no. sum ="<<sum1 <<"\n"<<"sum of odd"<<sum2;
    getch();
}
