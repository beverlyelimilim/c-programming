// Author :Beverly Elimilim
//Registration Number : BCS-05-0216/2026

#include <stdio.h>

int main() {
	float balance = 5000, amount;
	
	while(1) {
		printf("\nCurrent Balance: KSh %.2f\n", balance);
		printf("Enter withdrawal amount (0 to exit):");
		scanf("%f", &amount);
		
		if(amount == 0) {
			printf("Transaction ended.\n");
			break;
		}
		balance -= amount;
		printf("Withdraw successful.\n");
		printf("Remaining Balance: KSh%.2f\n", balance);
	}
	return 0;
}