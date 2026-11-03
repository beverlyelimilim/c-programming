#include<stdio.h>
int main() {
	FILE *fp;
	double amount, total = 0.00;
	
	//i. Read all transactions
	fp = fopen("C:\\Users\\user\\Documents\\sales.txt", "r");
	if (fp == NULL) {
		printf("Error: sales.txt not found!\n");
		return 1;
	}
	while (fscanf(fp, "%1f", &amount) == 1) {
		total += amount;
	}
	//ii.Display total
	printf("Total sales for the day: %.2f\n",total);
	
	//iii. Ensure file is proper closed
	fclose(fp);
	printf("File closed successfully.\n");
	
	return 0;
}