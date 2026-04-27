#include<stdio.h>
int main()
{
   int n;
   printf("Enter any number :");
   scanf("%d",&n);
   if(n%2==0)
      printf("%d is EVEN number",n);
   else
      printf("%d is an ODD number",n);
   return 0;
}
