#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("���Ѿ����һ��1��100֮���������\n"); 
	do{
		printf("��²����1��100֮�����:\n");
		scanf("%d",&a);
		count++;
		if(a > number){
			printf("��µ�������\n"); 
		}
		else if(a < number){
			 printf("��µ���С��\n");
		}
		 
	}while(a != number);
	printf("\n̫���ˣ���ֻ����%d�ξͲµ��˴𰸡�\n",count);
}
