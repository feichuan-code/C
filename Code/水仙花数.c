#include<stdio.h>

int main(){
	int n;//λ�� 
	scanf("%d",&n);
	int first = 1;//���� 
	int i = 1;//���� 
	while(i < n){//���������޺����� 
		first *= 10;
		i++;
	}
	i = first;
	while(i < first*10){//��������Nλ�� 
		int t = i;//��ʱ���� 
		int sum = 0,numB;//�� and ���λ�ϵ��� 
		while(t > 0){
			numB = t%10;//���λ�� 
			t /= 10; 
			int p = 1;//�ݽ��
			int j = 0;//�ݴ� 
			while(j < n){
				j++;
				p *= numB; 
				
			}
			sum += p;
			
		} 
		if(sum == i){//�ж� 
			printf("%d\n",sum); 
			}
		i++; 
		
	}
	
}
