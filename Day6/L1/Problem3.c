#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStudents(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int size = 5;  // Set the desired size of the array
    struct Student students[size];

    // Assuming the array of structures is initialized with values

    // Call the displayStudents function to display the array of structures
    displayStudents(students, size);

    return 0;
}
