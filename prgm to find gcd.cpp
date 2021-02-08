
#include<conio.h>
#include<iostream>

using namespace std;
int main()

{
    int a,b,c,i;
    cout<<"enter two no. to find gcd";
    cin>>a>>b;
    (a<b)?c=b:c=a;
    for(i=4; i<=c ; i++)
    {
        if(b%i==0 && a%i==0 )
        {
            cout<<"gcd ="<<i ;
            break;
        }
        else
        {
            c++;
        }

    }
    getch();
}
