#include<stdio.h>
#include<math.h>

int main(){
	int num,a,shu,cheng = 0,cs = 0;
	scanf("%d",&num);
	a = num;
	while(num != 0){
		num /= 10;
		cs++;
	}
	
	printf("这个数有%d位\n",cs); 
	while(cs != 0){
		shu = a%10 * pow(10,cs-1);
		cs--;
		cheng += shu;
		a /= 10;
		//错误1 cheng未赋值，导致系统自动赋值，结果错误 
	} 
	printf("逆序输出结果为:\n"); 
	printf("%d",cheng);
}
