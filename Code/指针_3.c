#include<stdio.h>
//¼ÆËã³ý·¨

int divide(double a,double b,double *result){
	int ret = 1;
	if(b==0) ret = 0;
	else *result = a/b;
	return ret;
}
 
int main(){
	double a = 7,b = 3;
	double c;
	if(divide(a,b,&c)){
		printf("%0.1f/%0.1f = %0.1f",a,b,c);
	}
	
}

