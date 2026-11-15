#include <stdio.h>
#include <math.h>
int main(void){double a,b,c,d,r,i;printf("Enter a, b and c: ");if(scanf("%lf%lf%lf",&a,&b,&c)!=3||a==0)return 1;d=b*b-4*a*c;if(d>=0)printf("Roots: %.2f and %.2f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));else{r=-b/(2*a);i=sqrt(-d)/(2*a);printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n",r,i,r,i);}return 0;}