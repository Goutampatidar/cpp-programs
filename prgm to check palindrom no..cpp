
#include<conio.h>
#include<iostream>

using namespace std;

int main()

{
    long int n,a;

    int i,r,sum=0;
    cout<<"enter a no. to reverse";
    cin>>n;
    a=n;
    for(i=1;n!=0;i++)
    {
        r=n%10;
        n=n/10;
        sum=sum*10+r;
    }
    if(a==sum){
    cout<<"the palindrom  no ";
    }
    else
    {
        cout<<"it is not palindrom no.";
    }
    getch();
}

