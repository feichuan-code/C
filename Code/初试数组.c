#include<stdio.h>
//����ʵ����ƽ���������������ƽ������ֵ(�Ҳ��ظ���)
int main(){
	int x = 1,cnt = 0,sum = 0;
	int i[100];
	while(x != -1){
		scanf("%d",&x);
//		if(x == 0){
//			printf("�벻Ҫ����0��");
//			continue; 
//		}
		i[cnt] = x;
		cnt++;
		sum += x; 
	}
	int average = sum/cnt;
	printf("ƽ������:%d\n",average);
	printf("����ƽ��������: ");
	for(int a=0;a<=cnt-1;a++){
		
		if(i[a] >= average){
//			if(i[a] == i[a-1]){
//				continue;
//			}
			printf("%-3d",i[a]);
		}
	}
} 
