#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
u

int main(){
	int key = 0;
	printf("\t�������Ӧ���������ж�Ӧ����:\n"
"\t1.���һ�������СΧǽ");
	while(key != -1){

		switch (key) {
			case 1:
				wall();
				break;
			case 2:
				//TODO
				break;
			default:
				//TODO
				break;
		}
		printf("\t���������(�˳�����-1):");
		scanf("%d",&key);
//		printf("key = %d",key);
	}
}
