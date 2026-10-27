#include <stdio.h>

float calculateFare(float diastance) {
	return distance * 50;
}

int main () {
	float distance, fare;
	
	printf("Enter distance travelled in km: ");
	scanf("%f", &distance);
	
	fare = calculateFare(distance);
	
	printf("Total fare = KSh %.2f\n", fare);
	
	return 0 ;
}