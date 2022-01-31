#include<stdio.h>
#include<math.h>

int main(){
	int x,t;
	scanf("%d",&x);
	t = x;
	int mask = 1;
	while(t > 9){
		t /=10;
		mask *= 10;
	}
	printf("mask = %d\n",mask);
	
//	int mask = pow(10,cnt-1);
	do{
		int  d = x / mask;
		printf("%d",d);
//		if(mask > 9){
//			printf(" ");
//		}
		x %= mask;
		mask /= 10;
		
	}while(mask > 0);
}
