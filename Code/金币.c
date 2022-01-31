#include<stdio.h>
int main(){
    int k;
	long long int sum=0,t=1;
    scanf("%d",&k);
	for(int i=1;i<=k;i++){
		k-=i,sum+=t*t,t++;
		
	}
	printf("%lld",sum+k*t);
}
