#include<stdio.h>

int main(){
	int n;//位数 
	scanf("%d",&n);
	int first = 1;//上限 
	int i = 1;//下限 
	while(i < n){//用于求上限和下限 
		first *= 10;
		i++;
	}
	i = first;
	while(i < first*10){//遍历所有N位数 
		int t = i;//临时变量 
		int sum = 0,numB;//和 and 最低位上的数 
		while(t > 0){
			numB = t%10;//求个位数 
			t /= 10; 
			int p = 1;//幂结果
			int j = 0;//幂次 
			while(j < n){
				j++;
				p *= numB; 
				
			}
			sum += p;
			
		} 
		if(sum == i){//判断 
			printf("%d\n",sum); 
			}
		i++; 
		
	}
	
}
