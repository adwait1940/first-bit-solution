#include<stdio.h>
int main(){
    int hour, minute;
    
    printf("enter a 24hour hm,am");
    scanf("%d%d",&hour,&minute);
    if(hour<0 || hour > 23 || minute < 0 || minute > 59){
        printf("invalid time formaqat\n");
    }
    int displayhour = hour % 12;
    if(displayhour == 0)displayhour = 12;
    
   char *period = (hour < 12) ? "AM" : "PM";


    
    printf("time in 12 hour format: %02d:%2d %s\n",displayhour,minute ,period);
    

    
return 0;
}