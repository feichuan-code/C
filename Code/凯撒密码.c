#include<stdio.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	char str[60];
	scanf("%60s",&str);
	for(int i=0;i<strlen(str);i++){
		str[i]+=n;
		if(str[i]>122){
			str[i]-=26;
		}
	}
	printf("%s",str);
}
