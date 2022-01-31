#include<stdio.h>

int isPrime(int);

int main(){
	int m,i,k;
	while(scanf("%d",&m)==1){
		if(isPrime(m)){
			printf("prime\n");
		}
		else printf("composite\n");
	}
} 

int isPrime(int m){
	int num = 1;
	for(int i=2;i<=m-1;i++){
		if(m%i==0){
			num = 0;
		}
	}
	return num;
}
