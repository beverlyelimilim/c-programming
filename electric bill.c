#include <stdio.h>

int main(){
	int household;
	float units;
	printf("==========\n");
	printf("Electricity bill  per household \n");
	printf("=============\n");
	
	for(household=1; household <=10; household++){
		printf("Enter the number of units used for household %d:", household);
		scanf("%f", &units);
		printf("Bill is Ksh %f\n",units);
	}
	return 0;
}