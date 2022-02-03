#include<stdio.h>

int main(){
	int a,b,max = 0,sum = 0,day = 0;
	for(int i=1;i<8;i++){
		scanf("%d %d",&a,&b);
		sum = a+b;
		if(sum>max&&sum>8){
			max = sum;
			day = i;
		}
	}
	printf("%d",day);
	return 0;
}
