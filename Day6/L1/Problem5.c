#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchStudentByName(const struct Student* students, int size, const char* name) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with name '%s' not found.\n", name);
    }
}

int main() {
    int size = 5;   
    struct Student students[size];

    
    char nameToSearch[20] = "Aron";

     
    searchStudentByName(students, size, nameToSearch);

    return 0;
}
