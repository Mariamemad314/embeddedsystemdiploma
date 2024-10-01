/*
 ============================================================================
 Name        : assignments3e.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char x;
    int y;
    printf("enter a string :");
    fflush(stdout);
    fgets(name,100,stdin);
    printf("enter the character to find frequency :");
    fflush(stdout);
    scanf("%c",&x);
    y=strlen(name);

    int count=0;
    for(int i=0;i<y;i++)
    {
        if (name[i]==x)
        {
            count++;
        }
    }
printf("the frequency = %d",count);
    return 0;
}
