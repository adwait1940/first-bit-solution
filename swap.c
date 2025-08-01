 //swapping number 
#include<stdio.h>
 int main() {
    int a, b, temp;

    printf("enter value of a : ");
    scanf("%d", &a);
    printf("enter value of b : ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;
     
    printf("after swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;


 }
