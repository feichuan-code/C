#include<stdio.h>
int gcd(int a,int b);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d 和 %d的最大公约数为 %d",a,b,gcd(a,b));
}
int gcd(int a,int b){
	int t;
	while(b != 0){
		t = a % b;
		a = b;
		b = t;
	}
	return a;
}
