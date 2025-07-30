#include<stdio.h>
   
int main(){

int year;
   printf("enter a year : ");
   scanf("%d", &year);
    
   if ((year % 400 == 0) || (year % 100 != 0 && year % 4==0 ))
      printf(" %d leap year");

   else
   printf("%d leap not year");
     return 0 ;


 }