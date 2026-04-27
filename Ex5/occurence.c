#include<stdio.h>
int main()
{
   int count=0,a[15],i,j,ch,n,key,flag;
   printf("enter the elements");
   scanf("%d",&n);
   printf("enter the elements of the array");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   printf("enter your choice");
         scanf("%d",&ch);
         switch(ch)
         {
            case 1:
            printf("\n enter the elements to count");
            scanf("%d",&j);
            for(i=0;i<n;i++)
            {
               if(j==a[i])
                  count++;
            }
            printf(" the number of occurence is %d",count);
            break;
            case 2:
            printf("enter the value to be searched");
            scanf("%d",&key);
            for(i=0;i<n;i++)
            {
               if(a[i]==key)
               {
                  printf("the position of the element is %d",i);
                  flag=1;
                  break;
               }
            }
            if(flag==1)
               printf("element is not found");
            break;
            default:
            printf("invalid choice");
            break;
         }
}
