#include <stdio.h>
#define PI 3.14159
//Author: Beverly Elimlim

int main() {
    float radius,height,volume,surface_area;

    //prompt user
    printf("Enter the radius of the cylinder:");
    scanf("%f",&radius);

    printf("Enter the height of the cylinder:");
    scanf("%f",&height);

    //calculate volume and area
    volume=PI*radius*radius*height;
    surface_area=(2*PI*radius*height)+(2*PI*radius*radius);
    
    //display output
    
	printf("volume of the cylinder is=%.2f\n",volume);
    printf("surface_area of the cylinder is=%.2f\n",surface_area);

    return 0;
}