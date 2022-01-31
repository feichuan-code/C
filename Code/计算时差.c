#include<stdio.h>

int main(){
	int hour1,minute1;
	int hour2,minute2;
	printf("请分别输入两个时间：\n"); 
	printf("时间1\n");
	scanf("%d %d",&hour1,&minute1);
	printf("时间2\n");
	scanf("%d %d",&hour2,&minute2);
	
	printf("时差为:%d(分钟)\n",abs((hour1 *60 + minute1 ) - (hour2 * 60 + minute2)));
	printf("时差为,:%d小时%d分钟",abs((hour1 *60 + minute1 ) - (hour2 * 60 + minute2))/60,abs((hour1 *60 + minute1 ) - (hour2 * 60 + minute2))%60);
	
	return 0;
	 
} 
