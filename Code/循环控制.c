#include<stdio.h>

int main(){
	int i,x,Prime=1;
	scanf("%d",&x);
	for(i = 2;i < x;i++){
		if(x % i == 0){
			Prime = 0;
			break; //��������ѭ������ʡ��Դ�� 
			
		}
	}
	if(Prime == 1){
		printf("������"); 
	}
	else{
		printf("��������");
	}
}
