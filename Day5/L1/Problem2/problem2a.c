#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

// Function to read a complex number
void readComplex(struct Complex *num) {
    printf("Enter the real part: ");
    scanf("%f", &(num->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(num->imaginary));
}

// Function to write a complex number
void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    // Read the first complex number
    printf("Enter the first complex number:\n");
    readComplex(&num1);

    // Read the second complex number
    printf("Enter the second complex number:\n");
    readComplex(&num2);

    // Write the complex numbers
    printf("\nFirst complex number:\n");
    writeComplex(num1);
    printf("\nSecond complex number:\n");
    writeComplex(num2);

    // Add the complex numbers
    sum = addComplex(num1, num2);
    printf("\nSum of the complex numbers:\n");
    writeComplex(sum);

    // Multiply the complex numbers
    product = multiplyComplex(num1, num2);
    printf("\nProduct of the complex numbers:\n");
    writeComplex(product);

    return 0;
}
