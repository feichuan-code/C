#include<stdio.hi>
//�̶����飬��������������Ƿ������������
int search(int x,int a[],int lenght);
 
int main(){
	int x = 0;
	int i[] = {2,3,4,5,7,10,24,11,7,9};
	
	while(x != -1){
		scanf("%d",&x);
		if(x ==-1){
			printf("Exit!");
			break;
		}
		int loc = search(x,i,sizeof(i)/sizeof(i[0]));
//		printf("byte = %d",sizeof(i)/sizeof(i[0]));
		if(loc != -1){
			printf("%d�����ڵ�%dλ\n",x,loc);
		}
		else printf("������");; 
	}
}
int search(int x,int a[],int lenght){
	int ret = -1;
	for(int i=0;i<lenght;i++){
		if(x == a[i]){
			ret = i;
		}
	
	}
		return ret;
} 
