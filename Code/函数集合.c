#include<stdio.h>
#include<string.h>
#include<time.h>
//最大值
int Max(int numb[],int Sizenumb){
	int n = 0;
	for(int i=0;i<Sizenumb;i++){
		if(numb[i]>n){
			n = numb[i];
		}
	}
	return n;
}
// 最小值
int Min(int numb[],int Sizenumb){
	int n = 100;
	for(int i=0;i<Sizenumb;i++){
		if(numb[i]<n){
			n = numb[i];
		}
	}
	return n;
}
// 排序
void Paixu(int numb[],int Sizenumb){
	for(int i=0;i<20;i++){
		//TODO
	
	for(int i=0;i<Sizenumb-1;i++){
		
		if(numb[i] < numb[i+1]){
			int t = numb[i+1];
			numb[i+1] = numb[i];
			numb[i] = t;
				
		}
//		else{
//			numb[i+1] = numb[i];
////			numb[i] = t;
//		}	
	}
	}
	for(int i=0;i<Sizenumb;i++){
		printf("%d ",numb[i]);
	}
}
int main(){
	clock_t start,stop;
	double duration;
	start = clock();
	int num[] = {1,5,2,5,2,44,20,11,22,33,44,55,66,77,110,40,11,20,99,20,200};
//	printf("%d",Max(num,sizeof(num)/sizeof(int)));
//	printf("%d",Min(num,sizeof(num)/sizeof(int)));
Paixu(num,sizeof(num)/sizeof(int));
	stop = clock();
	duration = ((double)(stop - start))/CLK_TCK;
	printf("   %lf",duration);
}
