#include<stdio.h>

int main(){
	int i,x,Prime=1;
	scanf("%d",&x);
	for(i = 2;i < x;i++){
		if(x % i == 0){
			Prime = 0;
			break; //用于跳出循环，节省资源。 
			
		}
	}
	if(Prime == 1){
		printf("是素数"); 
	}
	else{
		printf("不是素数");
	}
}
