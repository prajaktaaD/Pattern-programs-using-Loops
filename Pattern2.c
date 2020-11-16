#include<stdio.h>
void main()
{
    int i,j;
    while(i<=4)
     {
          j=3;
         while(j>i)
           {
                printf(" ");
                j--;
            }

           j=0;
           while(j<i)
           {
                printf("*");
               j++;
            }
           printf("\n");
      }
    }
