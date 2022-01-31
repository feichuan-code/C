#include<stdio.h>
//数组实现求平均数，并输出大于平均数的值(且不重复？)
//8bit = 1byte
int main(){
	int x = 1,cnt = 0,sum = 0;
	int i[] = {1,2,4,2,5,7,2,4};
	while(x != -1){
		scanf("%d",&x);
		if(x > 9){
			printf("请输入0~9的整数！");
			continue;
		} 
		i[cnt] = x;
		cnt++;
		sum += x; 
	}
	printf("大小：%d",sizeof(i));
	for(int num=0;num<=9;num++){
		int number = 0;
			for(int a=0;a<=cnt-1;a++){
				if(num == i[a]) number++;
			}
		printf("%d出现的次数是：%d\n",num,number);
	}
} 
