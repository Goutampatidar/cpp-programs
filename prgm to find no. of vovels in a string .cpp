#include<conio.h>
#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;

int main()
{
int i,c=0;
char a[50];
cout<<"enter the string";
gets(a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='u')
            {
        c=c+1;
    }
}
cout<<"no. of vovels are"<<c;
getch();
}
