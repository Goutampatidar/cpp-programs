#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;
class car
{
    char a[10];
    int cc;
    char c[10];
protected:
    void sat(char*A,int C,char *Cm )
    {
    strcpy(a,A);
        cc=C;
        strcpy(c,Cm);
    }
public:
     void show()
    {
        cout<<"\n model name- "<<a<<"\n engine power(hrs/p )- "<<cc<<" \n company name - "<<c;
    }
};
class sport_car:public car
{
  int s;
  char x[10] ;
public:
       void set( int S, char*X)
       {
           s=S;
           strcpy(x,X);
       }
       void call(char* A,int C, char *Cm)
       {
           sat(A,C,Cm);
       }
       void out()
       {
           cout<<" \nmax speed- "<<s<<"\n colour - "<<x <<endl;
       }

};
int main()
{
    sport_car c1;
    c1.call("XUV_202",250,"mahendra");
    c1.set(420,"black");

    c1.show();
    c1.out();
    getch();


}
