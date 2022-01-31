#include<stdio.h>

int age(int Age){
	int i = 0;
	if(Age >= 18){
		i = 1;
	}
		return i;
}

int main(){
	int Age;
	printf("请输入你的年龄:");
	scanf("%d",&Age);
	if(age(Age) == 1){
			printf("欢迎光临！");
		}
		else printf("未满18不能饮酒哦！");
}
