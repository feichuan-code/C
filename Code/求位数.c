#include<stdio.h>
#include<math.h>

int main(){
	int num,a,shu,cheng = 0,cs = 0;
	scanf("%d",&num);
	a = num;
	while(num != 0){
		num /= 10;
		cs++;
	}
	
	printf("�������%dλ\n",cs); 
	while(cs != 0){
		shu = a%10 * pow(10,cs-1);
		cs--;
		cheng += shu;
		a /= 10;
		//����1 chengδ��ֵ������ϵͳ�Զ���ֵ��������� 
	} 
	printf("����������Ϊ:\n"); 
	printf("%d",cheng);
}
