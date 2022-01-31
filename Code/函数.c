#include<stdio.h>
int sum(int n,int m){
	//计算n至m的和
	int sum = 0;
	for(;n<=m;n++){
		sum += n;
	}	
	return sum;
}

int main(){
	printf("%d",sum(1,10));
	}
