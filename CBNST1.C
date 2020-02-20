#include<stdio.h>
#include<math.h>
#include<conio.h>
#define e 0.001
#define f(x) x*x*x-4*x+1

void main()
{
 float x0,x1,x2;
 float f0,f1,f2;
 int f,i=0;
 clrscr();
  printf("Enter the values ofx0 and x1\n");
  scanf("%f%f",&x0,&x1);
 do
  {
    f0=f(x0);
    f1=f(x1);
    x2=(x0+x1)/2;
    f2=f(x2);
   if(f0*f1<0)
   {
    x1=x2;
   }
   else
   {
    x0=x2;
   }
   i++;
    printf("number of iteration=%d",i);
    printf("root=%f",x2);
    printf("value of function=%f\n",f2);
   }
   while(fabs(f(2))>e);
   getch();
   }
