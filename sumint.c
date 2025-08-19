#include<stdio.h>
void value(int *a,int *b){
    *a += 5;
    *b *= 10;
    printf("values:a=%d,b = %d\n",*a,*b);
}int main(){
    int x =3,y = 4;
    values(&x,&y);
    printf("final values: x = %d,y = %d\n",x,y);
    return 0;
}