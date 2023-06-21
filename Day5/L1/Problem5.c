#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void swapFields(struct Student *student1, struct Student *student2) {
    // Swap name
    char tempName[50];
    strcpy(tempName, student1->name);
    strcpy(student1->name, student2->name);
    strcpy(student2->name, tempName);

    // Swap roll number
    int tempRollNumber = student1->rollNumber;
    student1->rollNumber = student2->rollNumber;
    student2->rollNumber = tempRollNumber;

    // Swap marks
    float tempMarks = student1->marks;
    student1->marks = student2->marks;
    student2->marks = tempMarks;
}

int main() {
    struct Student student1 = { "John Doe", 101, 85.5 };
    struct Student student2 = { "Jane Smith", 102, 92.0 };

    printf("Before swapping:\n");
    printf("Student 1:\nName: %s\nRoll Number: %d\nMarks: %.2f\n", student1.name, student1.rollNumber, student1.marks);
    printf("Student 2:\nName: %s\nRoll Number: %d\nMarks: %.2f\n", student2.name, student2.rollNumber, student2.marks);

    // Swap the fields
    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\nName: %s\nRoll Number: %d\nMarks: %.2f\n", student1.name, student1.rollNumber, student1.marks);
    printf("Student 2:\nName: %s\nRoll Number: %d\nMarks: %.2f\n", student2.name, student2.rollNumber, student2.marks);

    return 0;
}
