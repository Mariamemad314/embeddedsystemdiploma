/*
 ============================================================================
 Name        : assignment4b.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
};

int main() {
    int x;
    printf("enter the number:");
    fflush(stdout);
    scanf("%d",&x);
    printf("Factorial of %d is %d\n",x, factorial(x));

    return 0;
}
