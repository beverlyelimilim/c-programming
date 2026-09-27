// Autor:Beverly Elimlim
//Registration number:BCS-05-0216/2026
//Description: compute data bundles purchase

# include <stdio.h>
int main() {
	int choice;
	
	//1.Display the menu
	printf("Select data bundle:\n");
	printf("1. 100MB @ 50 KES\n");
	printf("2. 500MB @ 200KES\n");
	printf("3. 1GB @  350KES\n");
	printf("4. 2GB @  600KES\n");
	
	//2.Ask user for choice
	printf("Enter your choice (1-4); ");
	scanf("%d", &choice);
	
	//3.Use switch statement to display bundle and cost 
	switch(choice) {
		case 1:
			printf("You selected 100MB. cost = 50KES\n");
			break;
        case 2:
        	printf("You selected 500MB. cost = 200KES\n");
        	break;
        case 3:
        	printf("You selected 1GB. cost = 350KES\n");
        	break;
        case 4:
        	printf("You selected 2GB. cost = 600KES\n");
        	break;
        default:
        	
        	//4.Invalid choice
        	printf("Invalid choice\n");
        	break;
	}
	return 0;
}
		
		