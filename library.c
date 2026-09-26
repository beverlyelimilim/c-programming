//Author:Beverly Elimilim
//Registration number: BCS-05-0216/2026
//Description: program to compute overdue library books
#include <stdio.h>

int main(){
	int bookID,dueDate,returnDate,daysOverdue;
	int fineRate,fineAmount;
	
	printf("Enter Book ID:");
	scanf("%d",&bookID);
	
	printf("Enter Due Date:");
	scanf("%d",&dueDate);
	
	printf("Enter Return Date:");
	scanf("%d",&returnDate);
	
	daysOverdue= returnDate-dueDate;
	
	if(daysOverdue <=7)
		fineRate=20;
	else if(daysOverdue <=14)
       fineRate= 50;
       else
       	fineRate=100;
	   
	   fineAmount=daysOverdue*fineRate;
	   
	   printf("\nBook ID:%d",bookID);
	   printf("\nDue Date:%d",dueDate);
	   printf("\nReturn Date: %d",returnDate);
	   printf("\nDays overdue:%d",daysOverdue);
	   printf("\nFine Rate:ksh %d",fineRate);
	   printf("\nFine amount:%d",fineAmount);
	   
	   return 0 ;

		   
	   }
       
