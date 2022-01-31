	#include<stdio.h>
	
	int main(){
		long int t;
		scanf("%ld",&t);
		long int n[t][2];
		for(int i=0;i<t;i++){
			scanf("%ld %ld",&n[i][0],&n[i][1]);
		}
		for(int i=0;i<t;i++){
			if(n[i][1]<=16){
				n[i][0]-=10;
				if(n[i][0]<0) n[i][0]=0;
			}
			if(n[i][1]>20){
				n[i][0]-=(n[i][1] - 20);
				if(n[i][0]<0) n[i][0]=0;
			}
			printf("%ld\n",n[i][0]);
		}
	}
