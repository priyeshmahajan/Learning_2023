/*a. Using the (*) asterisk or indirection operator and (.) dot operator*/
#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

int main() {
    struct Box myBox = { 5.0, 4.0, 3.0 };
    struct Box *ptr = &myBox;

    // Volume calculation
    float volume = ptr->length * ptr->width * ptr->height;
    printf("Volume: %.2f\n", volume);

    // Surface area calculation
    float surfaceArea = 2 * (ptr->length * ptr->width + ptr->length * ptr->height + ptr->width * ptr->height);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
