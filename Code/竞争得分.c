#include<stdio.h>

int main(){
	long int a;
	scanf("%ld",&a);
	double n[a],t = 0;
	for(int i=0;i<a;i++){
		scanf("%lf",&n[i]);
	}
	int MAX=0,MIN = 100; 
	for(int i=0;i<a;i++){
		if(n[i] >MAX){
			MAX = n[i];
		}
		if(n[i]<MIN){
			MIN = n[i];
		}
	}
	for(int i=0;i<a;i++){
		printf("%d",100*((n[i]-MIN)/(MAX-MIN)));
	}
	
}
