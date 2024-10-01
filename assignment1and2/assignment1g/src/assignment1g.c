/*
 ============================================================================
 Name        : assignment1g.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
 int main()
 { float x,y;
	 printf ("enter the value of a:");
	 fflush(stdout);
	 scanf("%f",&x);
	 printf ("enter the value of b:");
	 fflush(stdout);
	 scanf("%f",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	 printf("After swapping, value of a =%f \n After swapping, value of b =%f", x,y);


 }
