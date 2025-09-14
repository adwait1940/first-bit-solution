//wap of salaray elegibilty in c 
#include<stdio.h>
int main(){
    int age;
    float salaray;
    printf("enter a age of person");
    scanf("%d",&age);
    printf("enter a salaray of perason");
    scanf("%d",&salaray);
    if(age >=21 && salaray <= 10000){
        printf("you are eligible for loan");
    }else{
        printf("you are not elgible of loan");
    }
    return 0;
}