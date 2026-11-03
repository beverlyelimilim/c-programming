#include<stdio.h>
#include<stdlib.h>

 int main() {
   char name[100];
   char registration_number[50];
   
	 
    FILE*fptr;
    fptr = fopen("C:\\Users\\user\\Desktop\\Beverly student _info.txt", "w");
     if (fptr == NULL) {
        printf("Error in oppening the file");
        exit(1);

     }
   printf("what is the students full name: ");
    fgets(&name[0], sizeof(name), stdin);

     printf("What is the students registration number:");
     fgets(registration_number, sizeof(registration_number), stdin);

   fprintf(fptr, "The student name is: %s\nThe students registration number is: %s\n", name, registration_number);
     fclose(fptr);

     printf("Student details created successfully \n");

     return 0;
     


 }