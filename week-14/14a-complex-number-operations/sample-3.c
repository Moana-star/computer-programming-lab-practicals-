#include <stdio.h>
struct Complex{double r,i;};
struct Complex readComplex(void){struct Complex z;printf("Enter real and imaginary parts: ");scanf("%lf%lf",&z.r,&z.i);return z;}
void display(struct Complex z){printf("%.2f %c %.2fi",z.r,z.i<0?'-':'+',z.i<0?-z.i:z.i);}
struct Complex add(struct Complex a,struct Complex b){struct Complex c={a.r+b.r,a.i+b.i};return c;}
struct Complex multiply(struct Complex a,struct Complex b){struct Complex c={a.r*b.r-a.i*b.i,a.r*b.i+a.i*b.r};return c;}
int main(void){struct Complex a,b,s,p;puts("First complex number");a=readComplex();puts("Second complex number");b=readComplex();s=add(a,b);p=multiply(a,b);printf("Sum = ");display(s);printf("\nProduct = ");display(p);puts("");return 0;}