Author: Beverly Elimilim
Registration number:

#include <stdio.h>
#include <stdlib.h>

void saveStudent();
void displayStudents();
void addStudent();

int main() {
    saveStudent();
    displayStudents();
    addStudent();
    displayStudents();
    return 0;
}

void saveStudent() {
    FILE *fp;
    char admNo[50], name[100], course[100];

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening the file \n");
        exit(1);
    }

    printf("Enter admission number: ");
    fgets(admNo, sizeof(admNo), stdin);
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter course: ");
    fgets(course, sizeof(course), stdin);

    fputs("Admission No: ", fp);
    fputs(admNo, fp);
    fputs("Name: ", fp);
    fputs(name, fp);
    fputs("Course: ", fp);
    fputs(course, fp);
    fputs("--------------------\n", fp);

    printf("Student details successfully saved. \n");
    fclose(fp);
}

void displayStudents() {
    FILE *fp;
    int ch;

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening the file \n");
        exit(1);
    }

    printf("\n--- Student Records ---\n");
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\nFile successfully read \n");
    fclose(fp);
}

void addStudent() {
    FILE *fp;
    char admNo[50], name[100], course[100];

    fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("Error opening the file \n");
        exit(1);
    }

    printf("Enter admission number for new student: ");
    fgets(admNo, sizeof(admNo), stdin);
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter course: ");
    fgets(course, sizeof(course), stdin);

    fputs("Admission No: ", fp);
    fputs(admNo, fp);
    fputs("Name: ", fp);
    fputs(name, fp);
    fputs("Course: ", fp);
    fputs(course, fp);
    fputs("--------------------\n", fp);

    printf("New student successfully added. \n");
    fclose(fp);
}