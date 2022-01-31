//ËØÊı±í
#include<stdio.h>
#include<math.h>
int isPrime(int x){
	int ret = 0;
	for(int i=2;i<x;i++){
		if(x % i == 0){
			ret = 1;
			break;
		}
	}
	return ret;
}

int main(){
	const int n = 10;
	int x = 2;
	int prime[n];
	printf("\t");
	for(int i=0;i<=n;i++){
		prime[i] = 1;
		
		printf("%d\t",i);
		
	}
	printf("\n");
	for(x = 2;x<n;x++){
		if(isPrime(x)){
			for(int i=1;x*i<n;i++){
				prime[i*x] = 0;
			}
		}
		printf("x=%d prime[%d] = %d\n",x,x,prime[x]);
	}
	
} 
