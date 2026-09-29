//Authur:Beverly Elimilim
//Registration number:BCS-05-0216/2026

#include <stdio.h>
#include <string.h>

int main() {
	char password[10];
	
	do {
		printf("Enter password: ");
		scanf("%s", password);
		
		if(strcmp(password, "1234")!= 0) {
			printf("Wrong password, try again!\n");	
		}
	} while(strcmp(password, "1234")!= 0);
	
	printf("Access Granted\n");
	return 0;
}