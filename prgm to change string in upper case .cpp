#include<iostream>
#include<conio.h>
#include<string.h>
 char upr(char );
using namespace std;

int main()
{
    int n,i;
    char b;
    cout<<"enter length of string";
    cin>>n;
    char a[n];
    cout<<"enter string";
    cin>>a;
    for(i=0;i<n;i++)
    {
          b= upr(a[i]);
          a[i]=b;
    }
    for(i=0; i<n; i++)
    {
        cout<<" "<<a[i];
    }
    getch();
}
char upr(char a)
{

    char c=a;
        switch(c)
        {

        case 'a':
        {
            c='A';
            break;
        }
        case 'b':
        {
            c='B';
            break;
        }
        case 'c':
        {
            c='C';
            break;
        }
        case 'd':
        {
            c='D';
            break;
        }
        case 'e':
        {
            c='E';
            break;
        }
        case 'f':
        {
            c='F';
            break;
        }
        case 'g':
        {
            c='G';
            break;
        }
        case 'h':
        {
            c='H';
            break;
        }
        case 'i':
        {
            c='I';
            break;
        }
        case 'j':
        {
            c='J';
            break;
        }
        case 'k':
        {
            c='K';
            break;
        }
        case 'l':
        {
            c='L';
            break;
        }
        case 'm':
        {
            c='M';
            break;
        }
        case 'n':
        {
            c='N';
            break;
        }
        case 'o':
        {
            c='O';
            break;
        }
        case 'p':
        {
            c='P';
            break;
        }
        case 'q':
        {
            c='Q';
            break;
        }
        case 'r':
        {
            c='R';
            break;
        }
        case 's':
        {
            c='S';
            break;
        }
        case 't':
        {
            c='T';
            break;
        }
        case 'u':
        {
            c='U';
            break;
        }
        case 'v':
        {
            c='V';
            break;
        }
        case 'w':
        {
            c='W';
            break;
        }
        case 'x':
        {
            c='X';
            break;
        }
        case 'y':
        {
            c='Y';
            break;
        }
        case 'z':
        {
            c='Z';
            break;
        }
        default :
            break;
        }
        return(c);
    }


