
#include<iostrem >
#include<conio.h>

using namespace std;


 int main()
 {
     int i,j;
     int a[3][3],b[3][3],c[3][3];
     cout<<"enter value of 1 st matrix";
     for(i=0;i<=2;i++)
     {
        for(j=0;j<=2;j++)
         {
             cin>>a[i][j];
         }
     }
     cout<<"enter value of 2 nd matrix";
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
         {
             cin>>b[i][j];
         }
     }
     cout<<"enter value of 3 rd matrix";
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
         {
             c[i][j]=a[i][j]+b[i][j];
             cout<<c[i] [j];
         }
         cout<<"\n";
     }
     getch();
}
