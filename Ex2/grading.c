#include<stdio.h>
 int main()
{
     int tam,eng,mat,phy,chem,cs,total;
     float avg;
     printf("Enter your (tamil,english,maths,physics,chemistry,computer) marks:");
     scanf("%d%d%d%d%d%d",&tam,&eng,&mat,&phy,&chem,&cs);
     total=tam+eng+mat+phy+chem+cs;
     printf("Your Total is :%d\n",total);
     avg=total/6;
     printf("Your Average is:%.2f\n",avg);
     if((avg>=85)&&(avg<=100))
        printf("Your Grade is 'A'\n");
     else if((avg>=75)&&(avg>=85))
           printf("Your Grade is 'B'\n");
      else if((avg<=65)&&(avg>=75))
      printf("Your Grade is 'C'\n");
      else if((avg>=50)&&(avg<=65))
      printf("Your Grade is 'D'\n");
      else if(avg<=50)
      {
      printf("You are Fail\n");
      printf("KEEP TRYING,SCORE GOOD MARKS");
      }
      return 0;
     }
