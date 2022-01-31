#include<stdio.h>

int main(){

	float Ben;
	float Ben_x;
	
	printf("请输入本金："); 
	scanf("%f",&Ben);
	Ben_x = Ben*(1+0.033)*(1+0.033)*(1+0.033);
	printf("三年后的本息余额为:%0.3f",Ben_x);
	return 0;
}
