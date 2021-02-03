

#include<conio.h>
#include<iostream>

using namespace std;

int main()

{
    char a;
    cout<<"enter character";
    cin>>a;
    cout<<"a="<<a;
    if(a=='a'||a=='i'||a=='e'||a=='o'||a=='u')

    {
        cout<<"\n chracter is vovel ";
    }
    else
    {
        cout<<"\n character is consonent";
    }

    getch();
}

