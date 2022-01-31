#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
u

int main(){
	int key = 0;
	printf("\t请输入对应数字来运行对应程序:\n"
"\t1.输出一个随机大小围墙");
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
		printf("\t请继续输入(退出输入-1):");
		scanf("%d",&key);
//		printf("key = %d",key);
	}
}
