#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    unsigned char* p = (unsigned char*)a;
    unsigned char* q = (unsigned char*)b;

    for (size_t i = 0; i < size; i++) {
        unsigned char temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}

int main() {
    int a = 10;
    int b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    double c = 3.14;
    double d = 2.71828;

    printf("Before swap: c = %lf, d = %lf\n", c, d);
    swap(&c, &d, sizeof(double));
    printf("After swap: c = %lf, d = %lf\n", c, d);

    return 0;
}



/*      *************OUTPUT**************************
Before swap: a = 10, b = 20
After swap: a = 20, b = 10
Before swap: c = 3.140000, d = 2.718280
After swap: c = 2.718280, d = 3.140000
 */