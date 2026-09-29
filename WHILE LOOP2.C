//Author:Beverly Elimilim
//Registration number:BCS-05-0216/2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int secret, guess, attempts = 0;
	
	srand(time(0));
	secret = (rand() % 20) +1; // 1 to 20
	
	printf("Guess the number (1-20):\n");

	while(1){
		printf("Enter your guess: ");
		scanf("%d", &guess);
		attempts++;
		
		if(guess > secret){
			printf("Too high!\n");
		}else if(guess <secret) {
			printf("Too low!\n");
		}else {
			printf("Congratulations!\n");
			printf("You guessed correctly in %d attempts.\n",attempts);
			break;
		}
	}
	return 0;
}