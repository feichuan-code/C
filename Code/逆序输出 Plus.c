#include<stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	// x = 700;
	int didit;
	int ret = 0;
	
	while(x > 0){
	didit = x%10;
	//printf("%d",didit);//不忽略0 
	ret = ret*10 + didit;
	//printf("x = %d didit = %d ret = %d\n",x,didit,ret);//调试信息 
	x /= 10;
	 
	}
	printf("%d",ret); //忽略0 
}
