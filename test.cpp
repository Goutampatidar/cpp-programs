#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
     int n,a,b;
    int i;
    cin>>a>>b>>n;
    if(a>=1 && b<=n)
    {

        for(i=1;a<=n; i++)
        {
                a=a+b;
       }
       cout<<i-1;
    }

    else{

    exit(0);
    }


}


