#include <stdio.h>
struct Complex { double real, imag; };

struct Complex readComplex(void) {
    struct Complex z;
    printf("Enter real and imaginary parts: ");
    scanf("%lf%lf", &z.real, &z.imag);
    return z;
}
void display(struct Complex z) {
    printf("%.2f %c %.2fi", z.real, z.imag < 0 ? '-' : '+',
           z.imag < 0 ? -z.imag : z.imag);
}
struct Complex add(struct Complex a, struct Complex b) {
    struct Complex c = {a.real + b.real, a.imag + b.imag};
    return c;
}
struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex c = {a.real - b.real, a.imag - b.imag};
    return c;
}
struct Complex multiply(struct Complex a, struct Complex b) {
    struct Complex c = {a.real*b.real - a.imag*b.imag,
                        a.real*b.imag + a.imag*b.real};
    return c;
}
int main(void) {
    struct Complex a, b, c;
    puts("First complex number");
    a = readComplex();
    puts("Second complex number");
    b = readComplex();

    c = add(a, b); printf("Addition = "); display(c); puts("");
    c = subtract(a, b); printf("Subtraction = "); display(c); puts("");
    c = multiply(a, b); printf("Multiplication = "); display(c); puts("");

    if (b.real*b.real + b.imag*b.imag != 0) {
        c.real = (a.real*b.real + a.imag*b.imag) /
                 (b.real*b.real + b.imag*b.imag);
        c.imag = (a.imag*b.real - a.real*b.imag) /
                 (b.real*b.real + b.imag*b.imag);
        printf("Division = "); display(c); puts("");
    } else {
        puts("Division is not possible.");
    }
    return 0;
}
