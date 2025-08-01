#include<stdio.h>

int main()

 {
    int n = 153, 
	original = n,
	 sum = 0, digit;
    
    
    while(n != 0)
	
	 {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    
    if(sum == original){
	
    
        printf("Armstrong");
        
    }else{
	
    
        printf("Not Armstrong");
 }
    return 0;
}