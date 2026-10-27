//Author:Beverly Elimilim
//Registration Number:BCS-05-0216/2026
//Description:to display occupied and vacant rooms

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int occupancy[5][10];
	int i, j;
	int occupied, vacant;
	
	srand(time(NULL));
	
	//Generate random occupancy data
	for (i= 0; i < 5; i++) {
		for(j = 0; j < 10; j++){
		occupancy[i][j] = rand() % 2;
	}	
}

//Display occupancy for each floor
for (i = 0; i < 5; i++) {
	occupied = 0;
	vacant = 0;
	
	for (j = 0; j < 10; j++){
		if (occupancy[i][j] == 1) {
			occupied++;
		} else {
			vacant++;
		}
	}
	printf("\nFloor %d:\n", i+1);
	printf("occupied rooms: %d/n",occupied);
	printf("Vacant rooms: %d\n",vacant);
}
return 0;
}

