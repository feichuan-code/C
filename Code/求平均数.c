#include<stdio.h>

int main(){
	int sum=0,count=0,number=0;
	do{
		scanf("%d",&number);
		if(number != -1){
			sum += number;
			count++;
		} 
	}while(number != -1);
	printf("\nƽ����Ϊ:%d",(sum/count));
	//ȱ��
	//1.������Ϊ���Σ�������С����
	//2.ÿ��ѭ�������жϣ��˷���Դ��
	//�Ľ���
	sum=0,count=0,number=0;
	scanf("%d",&number);
	while(number != -1){
		sum += number;
		count++;
		scanf("%d",&number);
		
	}
	printf("\nƽ����Ϊ:%f",(1.0*sum/count));
} 
