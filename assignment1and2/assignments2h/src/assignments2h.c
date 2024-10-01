/*
 ============================================================================
 Name        : assignments2h.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{float a,b;
char y;
while(1){
printf("Enter operator either + or - or * or d (for divide)");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&y);
	printf("enter two operands:");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f",&a,&b);
	switch(y){
	case('+'):
		{
		printf("%f + %f = %f \n",a,b,a+b);
		break;}
	case('-'):
			{
			printf("%f - %f = %f \n",a,b,a-b);
			break;}
	case('*'):
	{
			printf("%f * %f = %f \n",a,b,a*b);
			break;}
	case('d'):
			{
			printf("%f / %f = %f \n",a,b,a/b);
			break;}
	}

}
}
