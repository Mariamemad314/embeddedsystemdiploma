/*
 ============================================================================
 Name        : assignment4Aa.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime (int x, int y)
{
    printf("the prime number between %d and %d is ",x,y);
    for(int i=x;i<y;i++)
    {int flag =1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
            flag = 0;
            break;
            }

      }if(flag)
      {
          printf("%d \t",i);
      }
    }
};
int main() {
    int x,y;
    printf("enter two numbers (intervals):");
    fflush(stdout);
    scanf("%d %d",&x,&y);
    prime (x,y);


    return 0;
}
