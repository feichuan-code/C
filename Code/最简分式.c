//����ʽ
#include<stdio.h>

int main(){
	int diviend,divisor;
	//  ��ĸ     ����
	scanf("%d/%d",&diviend,&divisor);
	
	int a =diviend;
	int b = divisor;
	int t;
	while(b != 0){
		t = a%b;
		a = b;
		b = t;
		
	} 
	printf("%d/%d\n",diviend/a,divisor/a);
	
	return 0;
} 
