#include<stdio.h>

int main(){
	const int FUCK = 3;
	int a;
	printf("������һ��1~3֮�������:\n");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("���Ϻã�");
			break;
		case 2:
			printf("����ã�");
			break;
		case 4:
			printf("what is��");
			break;
		case a < 0:
			printf("111111111");
		default:
			printf("������ô��");
			break;
	} 
} 
