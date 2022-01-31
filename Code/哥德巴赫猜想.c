#include<stdio.h>

int zs(int num);
int isPrime(int x);
int main(){
	int n;
	scanf("%d",&n);
	for(int i=4;i<=n;i+=2){
		zs(i);
	}
}

int zs(int num){
	for(int i=2;i<num;i++){
		for(int j=2;j<num;j++){
			if(isPrime(i)&&isPrime(j)){
			if(j+i==num){
				printf("%d=%d+%d\n",num,i,j);
				break;
				
				}
			}
		}

	}
}

int isPrime(int x){
	int ret = 1;
	for(int i=2;i*i<x;i++){
		if(x % i == 0){
			ret = 0;
			break;
		}
	}
	return ret;
}

