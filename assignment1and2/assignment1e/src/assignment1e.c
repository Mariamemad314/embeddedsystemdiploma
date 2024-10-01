/*
 ============================================================================
 Name        : assignment1e.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	char x;
	printf("enter a character:");
	fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c = %d ",x,x);
}
