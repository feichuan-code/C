#include<stdio.h>

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	double TrueSum=0,FalseSum=0,t=0,x=0;
	for(int i=1;i<=n;i++){
		if(i%k!=0){
			FalseSum+=i;
			t++;
		}
		else{
			TrueSum+=i;
			x++;
		}
	}
	printf("%.1lf %.1lf",(TrueSum/x),(FalseSum/t));
	
}
