#include<stdio.h>

int main(){
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磺\n" 
			"�磺\"5 7\" ��ʾ5Ӣ��7Ӣ�硣");
	
	float foot;
	float inch;
	
	scanf("%f %f",&foot,&inch);
	
	printf("�����%f�ס�\n",(foot + inch / 12 ) * 0.3048);
	
	return 0; 
	 
}
