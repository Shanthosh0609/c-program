#include<stdio.h>
int main()
   {
      int n,r,rev=0,orginal;
      printf("enter the number");
      scanf("%d",&n);
      orginal=n;
      while(n>0)
      {
         r=n%10;
         rev=rev+r*r*r;
         n=n/10;
      }
      if(orginal==rev)
         printf("the given number is amstrong");
      else
         printf("not amstrong");
      return 0;
   }
