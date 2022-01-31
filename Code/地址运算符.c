#include<stdio.h>

int main(){
	int p = 1;
	int a[9][9];
	printf("0x%p\n",&p);
	printf("0x%p\n",&a[0][0]);
	printf("0x%p\n",&a[0][8]);
	printf("0x%p\n",&p);
}
