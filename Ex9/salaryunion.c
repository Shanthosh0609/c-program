#include<stdio.h>
union employee
{
   char name[20];
   int empno;
   int bp;
};
int main()
{
   int i,n;
   float ts;
   union employee c[60];
   printf("enter no of emplyees");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("\n enter the name \t");
      scanf("%s",c[i].name);
      printf("\n enter the no \t");
      scanf("%d",&c[i].empno);
      printf("\n enter the payment \t");
      scanf("%d",&c[i].bp);
   }
   printf("employee details are");
   for(i=0;i<n;i++)
   {
      ts=c[i].bp+0.5*c[i].bp+0.05*c[i].bp;
      printf("\n total \t %f",ts);
   }
}
