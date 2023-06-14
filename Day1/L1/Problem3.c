/*Problem Statement - Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.*/

#include <stdio.h>

int main() {
    int rollNo;
    char name[100];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;

    // Read the roll number
    printf("Enter the Roll No: ");
    scanf("%d", &rollNo);

    // Read the name
    printf("Enter the Name: ");
    scanf(" %[^\n]", name);

    // Read the marks of Physics, Math, and Chemistry
    printf("Enter the Marks of Physics: ");
    scanf("%f", &physicsMarks);

    printf("Enter the Marks of Math: ");
    scanf("%f", &mathMarks);

    printf("Enter the Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);

    // Calculate the total marks and percentage
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300) * 100;

    // Print the summary
    printf("\n------ Student Summary ------\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
