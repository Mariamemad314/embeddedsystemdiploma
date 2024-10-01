/*
 ============================================================================
 Name        : assignment4c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void reverse ()
{
    char c;
    scanf ("%c",&c);
    if(c != '\n')
    {
        reverse();
        printf("%c",c);
    }
};
int main() {
    printf("enter the sentence:");
    fflush(stdout);
    reverse();


    return 0;
}
