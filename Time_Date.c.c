#include<stdio.h>
#include<time.h> // it is for time , ctime function and time_t data type
int main(){
   time_t t;
   time(&t);
   printf("\n\t----------------------------------------------------------------------------------------------------------------------------");
   printf("\n\t                ------------------------------ CURRENT TIME AND DATE ----------------------------------------");
   printf("\n\t----------------------------------------------------------------------------------------------------------------------------");
   printf("\n\n\t\t The Date and Time :-  %s",ctime(&t));
   getch();
	return 0;
}
