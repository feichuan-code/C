#include<stdio.h>

int main(){
	int num,numA,numB,numC;
	
	scanf("%d",&num);
	
	numA = num/100;
	numB = num/10%10;
	numC = num%10;
	
	if(numA == 0){
		numA = " ";
	}
	if(numB == 0){
			numB = " ";
		}
	if(numC == 0){
			numC = " ";
		}
	
	printf("%d%d%d",numC,numB,numA);
	//����Ϊ����ָ���...
	//�Ҿ�Ȼû�뵽0���κ�����Ϊ0.....��Ŀ���� 
	
		int m,bai,shi,ge,fx;
		scanf("%d",&m);
		bai = m/100;
		shi = m/10%10;
		ge = m%10;
		fx = ge*100+shi*10+bai;
		printf("%d--->%d",m,fx);
	return 0;
	
}
