#include<stdio.h>

void minmax(int *a,int len,int *max,int *min);
int main(){
	int a[] = {2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55,99};
	printf("main sizeof(a) = %p\n",a); 
	int min,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min =%d,max =%d",min,max);
	int *p = &min;
	printf("*p = %d\n",*p);
	printf("p[0] = %d\n",p[0]);
	printf("*a = %d\n",*a);
}
void minmax(int *a,int len,int *min,int *max){
	int i;
	printf("minmax sizeof(a) = %lu\n",sizeof(a)) ;
	*min = *max =a[0];

	for(i=0;i<len;i++){
		if(a[i] < *min){
			*min = a[i];
		}
		if(a[i] > *max){
			*max = a[i];
		}
	}
		a = 1000;
}
