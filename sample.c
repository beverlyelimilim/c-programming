Author : Beverly Elimilim
Registration number:

#include <stdio.h>
#include <stdlib.h>

void writeToFile();
void readFromFile();
void appendToFile();

int main() {
    writeToFile();
    readFromFile();
    appendToFile();
    readFromFile();
    return 0;
}

void writeToFile() {
    FILE *fp;
    char sentence[300];

    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("Error opening the file \n");
        exit(1);
    }

    printf("Enter a sentence \n");
    fgets(sentence, sizeof(sentence), stdin);
    fputs(sentence, fp);

    printf("Sentence successfully written to file. \n");
    fclose(fp);
}

void readFromFile() {
    FILE *fp;
    int ch;

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening the file \n");
        exit(1);
    }

    printf("\n--- File Contents ---\n");
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    printf("\nFile successfully read \n");
    fclose(fp);
}

void appendToFile() {
    FILE *fp;
    char sentence[300];

    fp = fopen("sample.txt", "a");
    if (fp == NULL) {
        printf("Error opening the file \n");
        exit(1);
    }

    printf("Enter an additional sentence to append \n");
    fgets(sentence, sizeof(sentence), stdin);
    fputs(sentence, fp);

    printf("Sentence successfully appended to file. \n");
    fclose(fp);
}