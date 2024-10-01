/*
 ============================================================================
 Name        : assignment1 aa.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{while(1){
	int x;
	printf ("Enter an integer you want to check ");
	fflush (stdout);
	scanf ("%d",&x);
	if(x%2==0)
	{
		printf("%d is even ", x);
	}
	else
	{
		printf("%d is odd ", x);
	}
}}
