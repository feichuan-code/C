#include<stdio.h>

int main(){
	float n,number;
	scanf("%f",&n);
	for(number = 0;n > 0;n--){
		number += 1.0/n;
		printf("%f + ",number);
	}
	printf("= %f",number);      
	
} 
