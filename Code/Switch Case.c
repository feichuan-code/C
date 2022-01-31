#include<stdio.h>

int main(){
	const int FUCK = 3;
	int a;
	printf("请输入一个1~3之间的整数:\n");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("早上好！");
			break;
		case 2:
			printf("中午好！");
			break;
		case 4:
			printf("what is？");
			break;
		case a < 0:
			printf("111111111");
		default:
			printf("这是甚么？");
			break;
	} 
} 
