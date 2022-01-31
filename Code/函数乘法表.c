// 函数乘法表 行数和列数指定
#include<stdio.h>

void print(int n){
	int rank = 1;

	for(;rank <= n;rank++){
		for(int row = 1;row <= rank;row++){
			printf("%d*%d=%-3d\t",rank,row,row*rank);
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d",&n);
	print(n);
} 
