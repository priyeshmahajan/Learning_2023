/*Problem statement -  Write a function to return the grade of the given student using switch case statements
90 to 100 -> 'A'
75 to 89 -> 'B'
60 to 74 -> 'C'
50 to 59 -> 'D'
36 to 49 -> 'E'
0 to 35 -> 'F'

In main check the return value and print the below
65 -> "Grade A"
66 -> "Grade B"
67 -> "Grade C"
68 -> "Grade D"
69 -> "Grade E"
70 -> "Grade F" */

#include <stdio.h>

char calculateGrade(int marks) {
    char grade;

    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 75 && marks <= 89) {
        grade = 'B';
    } else if (marks >= 60 && marks <= 74) {
        grade = 'C';
    } else if (marks >= 50 && marks <= 59) {
        grade = 'D';
    } else if (marks >= 36 && marks <= 49) {
        grade = 'E';
    } else if (marks >= 0 && marks <= 35) {
        grade = 'F';
    } else {
        grade = 'X'; // Indicate an invalid grade
    }

    return grade;
}

int main() {
    int marks;

    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);

    char grade = calculateGrade(marks);

    switch (grade) {
        case 'A':
            printf("Grade A\n");
            break;
        case 'B':
            printf("Grade B\n");
            break;
        case 'C':
            printf("Grade C\n");
            break;
        case 'D':
            printf("Grade D\n");
            break;
        case 'E':
            printf("Grade E\n");
            break;
        case 'F':
            printf("Grade F\n");
            break;
        default:
            printf("Invalid marks entered.\n");
            break;
    }

    return 0;
}
