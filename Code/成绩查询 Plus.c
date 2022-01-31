#include<stdio.h>

int main(){
	int score;
	char grade;
	// score = 分数
	// grade = 评级
	printf("请输入你的分数:\n");
	scanf("%c",&grade);
	score /= 10;
	switch(grade){
		case 10:
		case 'c':
			printf("您的评分为:A");
			break;
		case 8:
			printf("您的评分为:B");
			break;
		case 7:
			printf("你的评分为:C");
			break;
		case 6:
			printf("你的评分为:D");
			break;
		default:
			printf("你的评分为:E");
			break;			
	}
	// break 跳出语句 
	 
}
