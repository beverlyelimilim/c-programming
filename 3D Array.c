//Author: Beverly Elimilim
//Registration number: BCS-05-0216/2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int chain[3][5][10];
	int i, j, k;
	int totaloccupied = 0;
	
	srand(time(NULL));
	
	//Generate random occupancy data
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			for (k = 0; k < 10; k++) {
			chain[i][j][k] = rand() %2;	
			}
		}
	}
	//Count occupied rooms across all branches
	for (i = 0; i <3; i++) {
		for(j = 0; j <5; j++) {
			for(k = 0; k <10; k++) {
			     if (chain[i][j][k] == 1){
			     }	
			}
		}
	}
printf("Total rooms across all branches:%d/n", 3 * 5 * 10);
printf("Total occupied rooms; %d\n", totaloccupied);	
printf("Total vacant rooms : %d\n",(3 * 5 * 10) - totaloccupied);

return 0;
}

