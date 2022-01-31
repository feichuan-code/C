#include<stdio.h>

void swap(int a,int b);


int main(){
	int a = 5,b = 6;
	swap(a,b);
	if(a < b){
		int i = 1;
	}
	scanf("%d",&a);
}

void swap(int a,int b){
	int x;
	x = b;
	b = a;
	a =x;
}
