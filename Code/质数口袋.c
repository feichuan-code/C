#include<stdio.h>

int pd(int y){
	for(int i=2;i*i<y;i++){
		if(y%i==0) return 0;
	}
	return 1;
}

int main(){
    int L,t=0,sum=0;
    scanf("%d",&L);
    if(L<2){
		printf("0\n");
		return 0;
	}
	if(L==2){
		printf("2\n1\n");return 0;
	}
    for(int i = 2;sum<=L;i++){
        if(i%2==0&&i!=2) continue;
        if(sum+i>L){
			printf("%d\n",t);
		}
		if(pd(i)){
			printf("%d\n",i);
			sum+=i;
			t++;
		}
    }
    
}
