#include<stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	
	int fact = 1;
	for(int i=1;i <= x;i++){
		fact *= i;
	}
	
	printf("%d!=%d\n",x,fact);
	return 0;
}
