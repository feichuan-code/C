#include<stdio.h>

int main(){
	int i,x,number;
	scanf("%d",&number);
	
	for( i=1;i<=number;i++){
		for(x = 1;x<=i;x++){
			printf("%d x %d = %-3d",i,x,i*x); 
		} 
		printf("\n");
	}
}
