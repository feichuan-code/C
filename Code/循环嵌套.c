#include<stdio.h>

int main(){
	int x,i;
	for(x = 1;x < 100;x++){
		int Prime = 1;
	for(i=2;i < x;i++){
		if(x % i == 0){
			Prime = 0;
			break;
		}
	}
	if(Prime == 1){
		printf("%-3d",x);
	}
}
}
