/*
 ============================================================================
 Name        : assignment3g.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char name [100];
     char name2 [100];

    printf("please enter a string: ");
    fflush(stdout); fflush(stdin);
    fgets(name,100,stdin);
   int x= strlen(name);
   int j =x-2;
   for(int i=0;i<(x-1);i++)
   {
       name2[j]=name[i];
       j--;
   }
   printf("The reverse string is:%s",name2);
}
