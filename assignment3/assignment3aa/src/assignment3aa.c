/*
 ============================================================================
 Name        : assignment3aa.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
    float mat1[2][2];
    float mat2[2][2];
    float mat3[2][2];

    printf("Enter the elements of the 1st matrix:\n");
    fflush(stdout);
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Enter a[%d][%d]:\n ", i, j);
            fflush(stdout);
            scanf("%f", &mat1[i][j]);
        }
    }

    printf("Enter the elements of the 2nd matrix:\n");
    fflush(stdout);
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Enter b[%d][%d]\n: ", i, j);
            fflush(stdout);
            scanf("%f", &mat2[i][j]);
        }
    }

    printf("Sum of the matrices:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("%f\t", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
