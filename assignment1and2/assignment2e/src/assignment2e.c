/*
 ============================================================================
 Name        : assignment2e.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{while(1){
	char x;
	printf("Enter the character to check:");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&x);
	if ((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
	   printf("%c is an alphabet\n",x);
	else
		  printf("%c is not an alphabet \n",x);


}}
