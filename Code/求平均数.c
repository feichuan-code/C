#include<stdio.h>

int main(){
	int sum=0,count=0,number=0;
	do{
		scanf("%d",&number);
		if(number != -1){
			sum += number;
			count++;
		} 
	}while(number != -1);
	printf("\n平均数为:%d",(sum/count));
	//缺点
	//1.输出结果为整形，忽略了小数。
	//2.每次循环都会判断，浪费资源。
	//改进版
	sum=0,count=0,number=0;
	scanf("%d",&number);
	while(number != -1){
		sum += number;
		count++;
		scanf("%d",&number);
		
	}
	printf("\n平均数为:%f",(1.0*sum/count));
} 
