
#include<iostream>
#include<conio.h>

using namespace std;
int string_to_int(char*);
int main(int argc,char *argv[])

{
    cout<<argc<<"\n";

    int a,sum=0,i;
     for(i=0;i<argc;i++)
    {
           a=string_to_int(argv[i]);

        sum=sum+a;
    }
    cout<<sum;
    getch();
}
int  string_to_int( char *n)
{
    int i,x;
    for(i=0,x=0; n[i]; i++)
    {
        if(i==0 && n[0]=='-')
            i++;
        if(n[i]>='0'&&n[i]<='9')
        {
            x=x*10+(n[i]-48);
        }
        else
        {
            break;
        }
    }
    if(n[0]=='-')
        x=-x;
    return(x);
}
