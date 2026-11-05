Author: Beverly Elimilim
Registration number:BCS-05-0216/2026

#include <stdio.h>
#include <stdlib.h>

void writeEmployee();
void readEmployee();
void appendEmployee();

int main() {
    writeEmployee();
    readEmployee();
    appendEmployee();
    readEmployee();
    return 0;
}

void writeEmployee() {
    FILE *fp;
    char id[50], name[100], department[100];

    fp = fopen("employees.txt", "w");
    if (fp == NULL) {
        printf("Error opening the file \n");
        exit(1);
    }

    printf("Enter employee ID number: ");
    fgets(id, sizeof(id), stdin);
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter department: ");
    fgets(department, sizeof(department), stdin);

    fputs("ID Number: ", fp);
    fputs(id, fp);
    fputs("Name: ", fp);
    fputs(name, fp);
    fputs("Department: ", fp);
    fputs(department, fp);
    fputs("--------------------\n", fp);

    printf("Employee details successfully saved. \n");
    fclose(fp);
}

void readEmployee() {
    FILE *fp;
    int ch;

    fp = fopen("employees.txt", "r");
    if (fp == NULL) {
        printf("Error opening the file \n");
        exit(1);
    }

    printf("\n--- Employee Records ---\n");
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\nFile successfully read \n");
    fclose(fp);
}

void appendEmployee() {
    FILE *fp;
    char id[50], name[100], department[100];

    fp = fopen("employees.txt", "a");
    if (fp == NULL) {
        printf("Error opening the file \n");
        exit(1);
    }

    printf("Enter ID number for new employee: ");
    fgets(id, sizeof(id), stdin);
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter department: ");
    fgets(department, sizeof(department), stdin);

    fputs("ID Number: ", fp);
    fputs(id, fp);
    fputs("Name: ", fp);
    fputs(name, fp);
    fputs("Department: ", fp);
    fputs(department, fp);
    fputs("--------------------\n", fp);

    printf("New employee successfully added. \n");
    fclose(fp);
}