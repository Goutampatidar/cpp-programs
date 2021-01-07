#include<conio.h>
#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}


int main()
{
    int x,y;
    char ch;
    cout<<"enter x & y cordinate";
    cin>>x>>y;
    gotoxy(x,y);
    cout<<"here's goutam patidar";
     while(1)
     {
         ch = getch();
         switch(ch)
         {
         case 'a':
             {
                 x--;
                 break;
             }
         case 's':
             {
                 x++;
                 break;
             }
         case 'w':
             {
                 y--;
                 break;
             }
         case 'x':
             {
                 y++;
                 break;
             }
         case 'p':
            {
                 exit(0);
            }
         }
         system("cls");
         gotoxy(x,y);
         cout<<"here's goutam patidar";
     }
    getch();
}

