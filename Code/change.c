#include<stdio.h> 

int main(){
	int price = 0;
	const int Noconst;
	
	printf("�������Ԫ��:");
	scanf("%d",&price);
	
	
	int change = 100 - price;
	
	printf("����%dԪ��\n",change);
	Noconst = price + change;
	printf("%d",Noconst);
	
	return 0;
}
