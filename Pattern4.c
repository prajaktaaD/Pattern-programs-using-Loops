#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<5;i++)
    {    
        for(j=4;j>i;j--)
       printf(“ “);

        for(j=0;j<i;j++)
        printf(“%c”,j+65)

        printf(“\n”);
      }
}
