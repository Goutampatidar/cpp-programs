#include<conio.h>
#include<iostream>

using namespace std;


int main()
{
    int i,j,k,d,sum;
    int a[3][3],b[3][3],c[3][3];
    cout<<"enter value of first matrix";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter value of second matrix";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j++)
        {
            sum=0;
        for(k=0;k<3;k++)
        {
            d=a[i][k]*b[k][j];
            sum=sum+d;
        }
        c[i][j]=sum;

    }}
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";

        }
 cout<<"\n";
    }
    getch();
}
