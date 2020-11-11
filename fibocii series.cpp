#include<conio.h>
#include<iostream>


using namespace std;
int main()
{
    int a,i,b=1,c=0,sum=0;
    cout<<"enter a no. upto which e have to find series";
    cin>>a;
    for(i=1;sum<=a;i++)
    {
        cout<<"\t"<<sum;
        sum=c+b;
        b=c;
        c=sum;

    }
}
