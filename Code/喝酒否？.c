#include<stdio.h>

int age(int Age){
	int i = 0;
	if(Age >= 18){
		i = 1;
	}
		return i;
}

int main(){
	int Age;
	printf("�������������:");
	scanf("%d",&Age);
	if(age(Age) == 1){
			printf("��ӭ���٣�");
		}
		else printf("δ��18��������Ŷ��");
}
