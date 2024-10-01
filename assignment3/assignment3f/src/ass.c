/*
 ============================================================================
 Name        : ass.c
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
    printf("please enter a string: ");
    fflush(stdout); fflush(stdin);
    fgets(name,100,stdin);
    int i=0;
    while( name[i]!=0)
    {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
        i++;

    }
    printf("the length of the string = %d",i);
}
