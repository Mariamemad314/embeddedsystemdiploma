/*
 ============================================================================
 Name        : assignment2b.c
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
	printf("Enter the letter to check \n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&x);
	if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
					printf("%c is vowel ",x);
	else
					{
						printf("%c is not a vowel ",x);
					}

}}
