#include<iostream>
#include<conio.h>

using namespace std;
int string_to_int(char*);
int main(int argc,char *argv[])

{
cout<<argc;
int a;
a=string_to_int(argv[1]);
cout<<a;
getch();
}
int  string_to_int( char *n)
{
    int i,x;
    for(i=0,x=0;n[i];i++)
    {
        if(n[i]>='0'&&n[i]<='9')
        {
            x=x*10+(n[i]-48);
        }
        else{break;
        }
    }
    return(x);
}
