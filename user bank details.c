//Author:Beverly Elimlim
//Registration number:BCS-05-0216/2026
//Description: compute user bank details

# include <stdio.h>
int main () {

     float height;
     double bankbalance;
     char phonenumber[20];

     //Ask user to enter their height


     printf ("Enter your height in metres\t");
     scanf("%f",&height);


     //Ask user to enter bank balance


     printf("Enter your bank balance in Kenya shillings\t");
     scanf("%1f",&bankbalance);


     //Ask user to enter their phone number


     printf("Enter your phone number:\t");
     scanf( "%s",phonenumber);


     //display entered details

     
     printf("You are %.1f metres tall\n",height);
     
     
     printf("Your bank balance is %.1lf kenya shillings/n",bankbalance);
     
     
     printf("Your phone number is %s\n",phonenumber);

     return 0;
}