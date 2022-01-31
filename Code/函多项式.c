#include<stdio.h>
#include<math.h>
double f(double x);
int main(){
	double x;
	scanf("%lf",&x);
	printf("%f",f(x));
}

double f(double x){
	x = 0.8*pow(x,3)+3*pow(x,2)+9*x+1;
	return x;
}
