#include<stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	// x = 700;
	int didit;
	int ret = 0;
	
	while(x > 0){
	didit = x%10;
	//printf("%d",didit);//������0 
	ret = ret*10 + didit;
	//printf("x = %d didit = %d ret = %d\n",x,didit,ret);//������Ϣ 
	x /= 10;
	 
	}
	printf("%d",ret); //����0 
}
