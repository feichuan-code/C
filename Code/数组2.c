#include<stdio.h>
//����ʵ����ƽ���������������ƽ������ֵ(�Ҳ��ظ���)
//8bit = 1byte
int main(){
	int x = 1,cnt = 0,sum = 0;
	int i[] = {1,2,4,2,5,7,2,4};
	while(x != -1){
		scanf("%d",&x);
		if(x > 9){
			printf("������0~9��������");
			continue;
		} 
		i[cnt] = x;
		cnt++;
		sum += x; 
	}
	printf("��С��%d",sizeof(i));
	for(int num=0;num<=9;num++){
		int number = 0;
			for(int a=0;a<=cnt-1;a++){
				if(num == i[a]) number++;
			}
		printf("%d���ֵĴ����ǣ�%d\n",num,number);
	}
} 
