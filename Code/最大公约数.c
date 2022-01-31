#include<stdio.h>

int main(){
	//最大公约数
	int a,b,Max;
	scanf("%d%d",&a,&b);
//	int t = 0;
	if(a > b){
		Max = a;
	}
	else{
		Max = b;
	}
	int d;
	for(int t = 1;t <= Max;t++){
		if(a % t ==0){
			if(b % t ==0){
				d = t;
				printf("%d\n",d);
			}
		}
	 
}
}
