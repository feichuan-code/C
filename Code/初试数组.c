#include<stdio.h>
//数组实现求平均数，并输出大于平均数的值(且不重复？)
int main(){
	int x = 1,cnt = 0,sum = 0;
	int i[100];
	while(x != -1){
		scanf("%d",&x);
//		if(x == 0){
//			printf("请不要输入0！");
//			continue; 
//		}
		i[cnt] = x;
		cnt++;
		sum += x; 
	}
	int average = sum/cnt;
	printf("平均数是:%d\n",average);
	printf("大于平均数的有: ");
	for(int a=0;a<=cnt-1;a++){
		
		if(i[a] >= average){
//			if(i[a] == i[a-1]){
//				continue;
//			}
			printf("%-3d",i[a]);
		}
	}
} 
