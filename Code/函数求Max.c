#include<stdio.h>

int max(int a,int b,int c,int d){
	int max = 0;
	if(a > max){
		max = a;
	}
	if(b > max){
			max = b;
		}
	if(c > max){
			max = c;
		}
	if(d > max){
			max = d;
		}
	return max;

}

int main(){
	int a,b,c,d;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	printf("%d",max(a,b,c,d));
}
