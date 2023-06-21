#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int size) {
    char* token;
    int i = 0;

    // Parse the input string using strtok() function
    token = strtok((char*)input, " ");
    while (token != NULL && i < size) {
        // Initialize the fields of the structure based on the parsed tokens
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        students[i].name[sizeof(students[i].name) - 1] = '\0';
        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        token = strtok(NULL, " ");
        i++;
    }
}

int main() {
    const char* input = "1001 Aron 100.00";

    // Define the size of the array during runtime
    int size = 1;  // Set the desired size

    // Dynamically allocate memory for the array of structures
    struct Student* students = malloc(size * sizeof(struct Student));

    // Call the parseString function to initialize the array of structures
    parseString(input, students, size);

    // Print the contents of the array of structures
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}
