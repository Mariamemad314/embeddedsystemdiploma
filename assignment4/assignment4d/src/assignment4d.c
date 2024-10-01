/*
 ============================================================================
 Name        : assignment4d.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int pwr(int a,int b)
{if (b != 0)
{
	return(a* pwr(a,b-1));
}
else
	return 1;
}
int main()
{
	int a,b;
	printf("enter the base number");
	fflush(stdout);
	scanf("%d",&a);
	printf("enter the power number (+ve number only)");
		fflush(stdout);
		scanf("%d",&b);
		if(b<0)
			{printf("wrong power number");
return 0;}
		else{
			printf("%d^%d=%d",a,b,pwr(a,b));
		return 0;}

}
