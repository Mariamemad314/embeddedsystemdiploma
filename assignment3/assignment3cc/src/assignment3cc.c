/*
 ============================================================================
 Name        : assignment3cc.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {
    float array [100][100];
    float trans [100][100];
    int x,y;
    printf("Enter rows and columns of the array");
    fflush(stdout);

    scanf("%d %d",&x,&y);
    printf("enter the matrix elements: \n");
    for (int i=0;i<x;i++)
{
    for(int j=0;j<y;j++){
        printf("enter element a %d %d",i+1,j+1);
        fflush(stdout);
        scanf("%f",&array[i][j]);
        printf("\n");
        trans[j][i]=array[i][j];
    }
}
printf("transpose of the matrix: \n");
for (int i=0;i<y;i++)
{
    for(int j=0;j<y;j++)
    {
        printf("%f \t",trans[i][j]);
    }printf("\n");
}

    return 0;
}
