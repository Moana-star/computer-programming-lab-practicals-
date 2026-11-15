/*
 * PRACTICAL 7(c): Write a C Program to find whether given matrix is symmetric or not.
 * AIM: Not separately stated in the manual.
 * ALGORITHM: Not separately stated in the manual; read order of square matrix; read all elements; compare a[i][j] with a[j][i]; if any pair differs print Matrix is not symmetric and stop; otherwise print Matrix is symmetric.
 * FLOWCHART: Start -> Read square matrix -> Compare each element with its transposed position -> Display symmetric / not symmetric -> Stop.
 * SAMPLE INPUT: Order 2; matrix: 12 34 / 34 54
 * EXPECTED OUTPUT: Matrix is symmetric.
 */

#include <stdio.h>
int main(void){int a[10][10],n,i,j,ok=1;printf("Enter order (1-10): ");if(scanf("%d",&n)!=1||n<1||n>10)return 1;for(i=0;i<n;i++)for(j=0;j<n;j++)if(scanf("%d",&a[i][j])!=1)return 1;for(i=0;i<n;i++)for(j=0;j<n;j++)if(a[i][j]!=a[j][i])ok=0;puts(ok?"Matrix is symmetric.":"Matrix is not symmetric.");return 0;}