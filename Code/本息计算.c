#include<stdio.h>

int main(){

	float Ben;
	float Ben_x;
	
	printf("�����뱾��"); 
	scanf("%f",&Ben);
	Ben_x = Ben*(1+0.033)*(1+0.033)*(1+0.033);
	printf("�����ı�Ϣ���Ϊ:%0.3f",Ben_x);
	return 0;
}
