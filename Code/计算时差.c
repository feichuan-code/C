#include<stdio.h>

int main(){
	int hour1,minute1;
	int hour2,minute2;
	printf("��ֱ���������ʱ�䣺\n"); 
	printf("ʱ��1\n");
	scanf("%d %d",&hour1,&minute1);
	printf("ʱ��2\n");
	scanf("%d %d",&hour2,&minute2);
	
	printf("ʱ��Ϊ:%d(����)\n",abs((hour1 *60 + minute1 ) - (hour2 * 60 + minute2)));
	printf("ʱ��Ϊ,:%dСʱ%d����",abs((hour1 *60 + minute1 ) - (hour2 * 60 + minute2))/60,abs((hour1 *60 + minute1 ) - (hour2 * 60 + minute2))%60);
	
	return 0;
	 
} 
