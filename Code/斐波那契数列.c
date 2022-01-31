// 1 2 3 5 8 
#include<stdio.h>

int main(){
	int x = 1,i,x2 = 1,x3 = 0;
	scanf("%d",&i);
	printf("%-2d",x);
	for(x2 = 1;i>0;i--){
		x3 = x + x2;
		x = x2;
		x2 = x3;
		printf("%-2d",x3);
		
	}
	 
}
