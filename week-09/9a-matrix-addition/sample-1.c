/*
 * PRACTICAL 9(a): Write a C program to perform addition of two matrices.
 * AIM: To perform addition of two matrices.
 * ALGORITHM: Start; for i=0 to 2 and j=0 to 2 read a[i][j],b[i][j]; calculate c[i][j]=a[i][j]+b[i][j]; print c[i][j]; Stop.
 * FLOWCHART: Start -> Read two 3x3 matrices -> Add corresponding elements -> Display result matrix -> Stop.
 * SAMPLE INPUT: A: 1 2 3 / 4 5 6 / 7 8 9; B: 1 1 1 / 1 1 1 / 1 1 1
 * EXPECTED OUTPUT: 2 3 4 / 5 6 7 / 8 9 10
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
int main(void){int a[10][10],b[10][10],r,c,i,j;printf("Enter rows and columns: ");if(scanf("%d%d",&r,&c)!=2||r<1||r>10||c<1||c>10)return 1;printf("Enter first matrix:\n");for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&a[i][j]);printf("Enter second matrix:\n");for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&b[i][j]);puts("Sum matrix:");for(i=0;i<r;i++){for(j=0;j<c;j++)printf("%d ",a[i][j]+b[i][j]);puts("");}return 0;}