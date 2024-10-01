/*
 ============================================================================
 Name        : assignment2f.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{ int x,sum=0;
printf("Enter an integer");
fflush(stdout);
scanf("%d",&x);

	for(int j=0;j<=x;j++)
{
	sum+=j;
} printf("the sum = %d",sum);
}
