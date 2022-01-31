//五子棋判断

#include<stdio.h>

int main(){
	const int size = 3;
	int board[size][size];
	int i,j;
	int numbOfX;
	int numbOfO;
	int result = -1;// -1 平局,1 x赢，0 O赢
	
	for( i=0; i<size; i++){
		for(j = 0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}
	
	for( i=0; i<size && result == -1; i++){
		//行 
		numbOfO = 0,numbOfX = 0;
			for(j = 0;j<size;j++){
				if(board[i][j] == 1){
					numbOfX++;
				}
				else numbOfO++;
			}
			if(numbOfO == size){
					result = 0;
				}
				else if(numbOfX == size){
					result = 1;
				}
				else{
		//列 
					for( i=0; i<size && result == -1; i++){
						numbOfO = 0,numbOfX = 0;
							for(j = 0;j<size;j++){
								if(board[j][i] == 1){
									numbOfX++;
									}
								else numbOfO++;
								}
								if(numbOfO == size){
									result = 0;
									}
								else if(numbOfX == size){
									result = 1;
									}
								else{
			//正斜 
										numbOfO = 0,numbOfX = 0;									
									for( i=0; i<size; i++){

												if(board[i][i] == 1){
													numbOfX++;
													}
												else numbOfO++;
												}
												if(numbOfO == size){
													result = 0;
													}
												else if(numbOfX == size){
													result = 1;
													}
												else{
			//反斜 
					numbOfO = 0,numbOfX = 0;									
									for( i=0; i<size; i++){

												if(board[i][size-i-1] == 1){
													numbOfX++;
													}
												else numbOfO++;
												}
												if(numbOfO == size){
													result = 0;
													}
												else if(numbOfX == size){
													result = 1;
													}													
												}					
								}
						}
						
				}
		}
	
	printf("%d",result);
} 
