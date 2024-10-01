/*
 ============================================================================
 Name        : assignment2c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{float x=0,y=0,z=0;
	printf("Enter three numbers");
	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
		{
			printf("largest number = %f",x);

		}
		else
		{
			printf("largest number = %f",z);
		}
	}
	else
	{
			if(y>z)
			{
				printf("largest number = %f",y);

			}
			else
			{
				printf("largest number = %f",z);
			}
		}
}
