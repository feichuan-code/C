//三角形分类
#include<stdio.h>



int main(){
	int a[3],t;
	char A,B,C;
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	if(a[0]>a[1]){
		t = a[0];
		a[0] = a[1];
		a[1] = t;
		
	}
	if(a[0]>a[2]){
		t = a[0];
		a[0] = a[2];
		a[2] = t;
		
	}
	if(a[1]>a[2]){
		t = a[1];
		a[1] = a[2];
		a[1] = t;
		
	}
	printf("%d %d %d",a[0],a[1],a[2]);
	
}
