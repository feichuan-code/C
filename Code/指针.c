#include<stdio.h>

void f(int *p);

int main(void){
	int i = 6,n = 5;
	swap(&i,&n);
	printf("i = %d\n",i);
	printf("n = %d\n",n);
//	f(&i);
//	g(i);
//	printf("i = %d\n",i);
	return 0;
}

void swap(int *pa,int *pb){
	int t = *pa;
	*pa = *pb;
	*pb = t; 
}
//void f(int *p){
//	*p = 111;
//	printf("p = %d\n",*p);
//}
//void g(int k){
//	printf("k = %d",k);
//}
