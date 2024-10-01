/*
 ============================================================================
 Name        : assignment3d.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
int array [100];
int x,y,z;
   printf("Enter the number of elements : \n");
   fflush(stdout);
   scanf("%d",&x);
   printf("Enter the elements of array \n");
  	   fflush(stdout);
   for (int i=0;i<x;i++){

	   scanf("%d",&array[i]);
   }
   printf("Enter the element to be inserted: \n");
  	   fflush(stdout);
  	   scanf("%d",&y);
  	 printf("Enter the location: \n");
  	   	   fflush(stdout);
  	   	   scanf("%d",&z);
  	   	   for(int i=x-1;i>=z;i++){
  	   		   array[i+1]=array[i];}
array[z-1]=y;
for (int i=0;i<(x+1);i++){

	  printf("%d",array[i]);
  }
}


