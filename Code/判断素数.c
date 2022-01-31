#include<stdio.h>

int isPrime(int i){
		int ret = 1;
			int k;
	//		i = 1;
				for(k = 2;k<i-1;k++){
					if(i%k==0){
					ret = 0;
					break;
				}
		}
		return ret;
} 

int main(){
	int m,n;
	int i;
	int cnt=0;
	int sum=0;
	scanf("%d %d",&m,&n);
	if(m == 1){
		m = 2;
	}
	for(i = m;i<=n;i++){
	
	//ÅÐ¶ÏiÊÇ·ñÎªËØÊý
	if(isPrime(i)){
		cnt++;
		sum+=i; 
	} 
	}
	printf("%d %d\n",cnt,sum);
}
