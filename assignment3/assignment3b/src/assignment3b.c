/*
 ============================================================================
 Name        : assignment3b.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	float nums [100];
	int x;
	float sum=0,average;
	  printf("Enter the numbers of data\n");
	    fflush(stdout);
	    scanf("%d",&x);
	    for (int i=0;i<x;i++)
	    {
	    	 printf("Enter the number\n");
	    		    fflush(stdout);
	    		    scanf("%f",&nums[i]);
	    		    sum+= nums[i];
	    }
	    average=sum/x;
	    printf("average= %f \n",average);
	    return 0;
}

