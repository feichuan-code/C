#include<stdio.h>
int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    long long ans = 0;
    for(int i=0;i<n;i++){
		if(x!=6&&x!=7){
			ans +=250;
		}
		if(x == 7) x = 1;
		else x++;
	}
	printf("%lld",ans);
}
