/*
 ============================================================================
 Name        : assignment1f.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
 int main()
 { float x,y,t;
	 printf ("enter the value of a:");
	 fflush(stdout);
	 scanf("%f",&x);
	 printf ("enter the value of b:");
	 fflush(stdout);
	 scanf("%f",&y);
	 t=x;
	 x=y;
	 y=t;
	 printf("After swapping, value of a =%f \n After swapping, value of b =%f", x,y);


 }
