#include<stdio.h>
#include<math.h>
#define Pai 3.14
int main(){
	double area,S;
	int r;
	scanf("%d",&r);
	S = Pai * r *r; 
	area = sqrt(3)*S;
	printf("%0.2f ",area);
	printf("%0.2f%%",S/area*100);
}
