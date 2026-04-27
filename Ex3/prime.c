#include<stdio.h>
 int main()
    {
    int n,i,flag=0;
   printf("Enter any Number:");
   scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
   if (n%i==0)
  {
   flag++;

  }
    }
   if (flag == 2)
   {
     printf("It is a Prime number");
   }

else
{
   printf("It is not  a prime number");
}
return 0;
         }
