#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d,%d,%d",a,b,c);
	printf("%d",a*a+b*b == c*c || a*a+c*c == b*b || c*c+b*b == a*a);
	if(a*a+b*b == c*c || a*a+c*c == b*b || c*c+b*b == a*a){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
