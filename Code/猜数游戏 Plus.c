//猜数游戏
#include<stdio.h>

int main(){
	int number,n;
	int inp;
	int finisend = 0;
	int cnt = 0; 
	scanf("%d %d",&number,&n);
	do{
		scanf("%d",&inp);
		cnt++;
		if(inp < 0){
			printf("Game over\n");
			finisend = 1; 
		}else if(inp > number){
			printf("too big\n");//大于 
		}else if(inp < number){
			printf("too small\n");//小于 
		}else{
			if(cnt == 1){
				printf("Bingo!\n");
			}else if(cnt <= 3){
				printf("Lucky You!\n"); 
			}else{
				printf("Good guess!\n");
			}
			finisend = 1;
		}
		if(cnt == n){
			if(!finisend){
				printf("Game Over\n");
				finisend = 1;
			}
		}
	}while(!finisend);
	return 0;
} 
