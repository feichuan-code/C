#include<stdio.h>

int main(){
	int L,R;
	scanf("%d %d",&L,&R);
	int cnt =0;
	for(int i=L;i<=R;i++){
		
		for(int num=i;num>0;num/=10){
			if(num%10 == 2){
				cnt++;
			}
		}
	}
	printf("cnt = %d",cnt);
}
