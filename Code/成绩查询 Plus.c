#include<stdio.h>

int main(){
	int score;
	char grade;
	// score = ����
	// grade = ����
	printf("��������ķ���:\n");
	scanf("%c",&grade);
	score /= 10;
	switch(grade){
		case 10:
		case 'c':
			printf("��������Ϊ:A");
			break;
		case 8:
			printf("��������Ϊ:B");
			break;
		case 7:
			printf("�������Ϊ:C");
			break;
		case 6:
			printf("�������Ϊ:D");
			break;
		default:
			printf("�������Ϊ:E");
			break;			
	}
	// break ������� 
	 
}
