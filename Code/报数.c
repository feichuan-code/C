#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int x,n;
		scanf("%d",&x);
		n = x;
	if(x%7!=0&&n%10!=7){
			while(1){
				x++;
				if(x%7!=0&&n%10!=7){
					printf("%d",x);
					break;
			}
			}		
		}
		else printf("-1\n");
	}
}
