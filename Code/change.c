#include<stdio.h> 

int main(){
	int price = 0;
	const int Noconst;
	
	printf("请输入金额（元）:");
	scanf("%d",&price);
	
	
	int change = 100 - price;
	
	printf("找您%d元。\n",change);
	Noconst = price + change;
	printf("%d",Noconst);
	
	return 0;
}
