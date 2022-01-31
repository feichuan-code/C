#include<stdio.h>

int isPrime(int n){
	int num;
	for(int i=2;i<=n;i++){
		if(i % n - 1 == 0){
			num = 0;
		}
		else num = 1;

	}
	return num;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",isPrime(n));
	
}
