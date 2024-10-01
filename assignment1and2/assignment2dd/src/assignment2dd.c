/*
 ============================================================================
 Name        : assignment2dd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	float x;
	printf("Enter the number:");
	fflush(stdout);
	scanf("%f",&x);
	if(x>0)
	{
		printf("%f if positive",x);

	}
	else if (x<0){
		printf("%f if negative",x);

	}
	else
		printf("%f if zero",x);

}
