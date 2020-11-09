#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
//	float inches,feet,meter,km,miles;
	float b,c;
    int a,n=1,i;	
	while(n)
	{
		printf(" ENTER ANY NO. \n  \n 1. FOR M-KM \n \n 2. FOR M- FEET  \n \n 3. FOR M-MILES \n \n 4. KM-MILES \n \n  5. FEET- MILES \n \n ");
	    scanf("%d",&a);
		switch(a)
		{
		
		case 1:
				{
					printf(" enter the no. to convert from M- KM");
					scanf("%f",&b);
					c=b*.001;
					printf("%f   of no in KM is    %f",b,c);
					break;
				}
        case 2:
				{
					printf(" enter the no. to convert from M- FEET");
					scanf("%f",&b);
					c=b*3.28;
					printf("%f   of no in FEET is    %f",b,c);
					break;
				}
        case 3:
				{
					printf(" enter the no. to convert from M- INCHES");
					scanf("%f",&b);
					c=b*39.370;
					printf("%f   of no in INCHES is   %f",b,c);
					break;
				}
        case 4:
				{
					printf(" enter the no. to convert from M- MILES");
					scanf("%f",&b);
					c=b*.000621;
					printf("%f   of no in MILES is      %f",b,c);
					break;
				}
        case 5:
				{
					printf(" enter the no. to convert from KM-MILES");
					scanf("%f",&b);
					c=b*.6213;
					printf("%f    of no in MILES is    %f",b,c);
					break;
				}
        case 6:
				{
					printf(" enter the no. to convert from FEET - MILES");
					scanf("%f",&b);
					c=b*.000189;
					printf("%f     of no in MILES is    %f",b,c);
					break;
				}
				
	    
				
		}
		if(a==7)
		{
			printf("\n invalid input");
			exit (0);
		}
		printf("\n");
		for(i=0;i<=70;i++)
		{
		printf("=");
	    }
	    printf("\n");
		
	}
 return 0;
 getch();
}
