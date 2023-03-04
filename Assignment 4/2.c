#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex add(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

struct complex sub(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}

struct complex mul(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real*b.real - a.imag*b.imag;
    c.imag = a.real*b.imag + a.imag*b.real;
    return c;
}

int main() {
    struct complex a, b, c;

    printf("Enter first complex number:\n");
    printf("Real part: ");
    scanf("%f", &a.real);
    printf("Imaginary part: ");
    scanf("%f", &a.imag);

    printf("\nEnter second complex number:\n");
    printf("Real part: ");
    scanf("%f", &b.real);
    printf("Imaginary part: ");
    scanf("%f", &b.imag);

    c = add(a, b);
    printf("\nSum = %.2f + %.2fi\n", c.real, c.imag);

    c = sub(a, b);
    printf("Difference = %.2f + %.2fi\n", c.real, c.imag);

    c = mul(a, b);
    printf("Product = %.2f + %.2fi\n", c.real, c.imag);

    return 0;
}
