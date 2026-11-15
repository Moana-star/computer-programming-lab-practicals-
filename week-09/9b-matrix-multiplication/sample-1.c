/*
 * PRACTICAL 9(b): Write a C program that uses functions to perform Multiplication of Two Matrices.
 * AIM: To perform multiplication of two matrices.
 * ALGORITHM: Read matrix dimensions and elements; check whether columns of A equal rows of B; calculate c[i][j]=c[i][j]+a[i][k]*b[k][j]; display A, B and C; Stop.
 * FLOWCHART: Start -> Read matrix dimensions -> Check multiplication compatibility -> Read matrices -> Multiply using nested loops -> Display product -> Stop.
 * SAMPLE INPUT: A size 2x2: 1 0 / 2 6; B size 2x2: 3 4 / 4 2
 * EXPECTED OUTPUT (PDF PRINTED): C matrix: 3 4 / 24 20
 * NOTE: The PDF's printed second-row result is inconsistent with its own input matrices. Standard matrix multiplication gives 30 20 for the second row; the runnable program calculates 30 20.
 * RECORD: Record at least 3 results.
 */

#include <stdio.h>
void multiply(int a[10][10],int b[10][10],int c[10][10],int r1,int c1,int c2){int i,j,k;for(i=0;i<r1;i++)for(j=0;j<c2;j++){c[i][j]=0;for(k=0;k<c1;k++)c[i][j]+=a[i][k]*b[k][j];}}
int main(void){int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;printf("Enter rows and columns of A: ");if(scanf("%d%d",&r1,&c1)!=2)return 1;printf("Enter rows and columns of B: ");if(scanf("%d%d",&r2,&c2)!=2||c1!=r2||r1>10||c1>10||c2>10||r1<1||c1<1||c2<1){puts("Incompatible dimensions.");return 1;}for(i=0;i<r1;i++)for(j=0;j<c1;j++)scanf("%d",&a[i][j]);for(i=0;i<r2;i++)for(j=0;j<c2;j++)scanf("%d",&b[i][j]);multiply(a,b,c,r1,c1,c2);puts("Product matrix:");for(i=0;i<r1;i++){for(j=0;j<c2;j++)printf("%d ",c[i][j]);puts("");}return 0;}