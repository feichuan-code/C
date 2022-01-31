// 3! = 3 x 2 x 1 
// 高精度暂时没学，，， 
#include<stdio.h>

int main(){
	int n,s = 1;;
	scanf("%d",&n);
	n >= 1 && n <= 50; 

	for(;n > 0;n--){
		s *= n;
	}
	printf("%d",s);
}
