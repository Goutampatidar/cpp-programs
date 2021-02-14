#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{int n,i;
cout<<"enter no. of words in string";
cin>>n;
    char a[n];
    cout<<"enter string";
    cin>>a;
    for(i=0;i<n;i++){
    cout<<" "<<a[i];
    }
    cout<<"\n";
   cout<< strlen(a)<<endl;
   cout<< strrev(a);


    return(0);
    getch();
}
