
#include<conio.h>
#include<iostream>
#include<limits.h>
using namespace std;
void sort(int* ,int);
int large(int,int);

int main()
{

    int i,j,n;

    cout<<"enter any no. n\n";
    cin>>n;
    int a[n];
    cout<<"enter no. of value\n ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,n);
    for(j=0; j<n; j++)
    {
        cout<<"\n "<<a[j];
    }
    getch();

}
int large(int a[],int n)
{
    int b,i,index=0;
    b=a[0];
    for(i=0; i<n; i++)
    {
        if(b<a[i])
        {
            b=a[i];
            index=i;
        }
    }
    return(index);
}
void sort(int a[],int n)
{
    int max;
    int t;


    if(n>1)
    {
        max=large(a,n);
        t=a[n-1];
        a[n-1]=a[max];
        a[max]=t;
        sort(a,n-1);
    }

}
