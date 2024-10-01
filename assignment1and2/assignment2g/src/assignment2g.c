/*
 ============================================================================
 Name        : assignment2g.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{ int x,multi=1;
printf("Enter an integer");
fflush(stdout);
scanf("%d",&x);
if(x<0)
{
	printf("error this number is negative");
}
else{
	for(int j=1;j<=x;j++)
{
	multi*=j;
} printf("the factorial of %d = %d",x,multi);
}}
