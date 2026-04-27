#include<stdio.h>
int main()
{
   int a[6],i,j,temp=0,n;
   printf("enter the number of elements");
   scanf("%d",&n);
   printf("enter array element:");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
         if(a[i]>a[j])
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }}}
   for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);
   }
   return 0;
}
