#include<stdio.h>

int main(){
//	char cc[] = {'h','e','l','l','o',0};
//	for(int i=0;i<sizeof(cc)/sizeof(cc[0]);i++){
//		printf("%c",cc[i]);
//	}
char line[10] = "Hello";
char *str = "hello";
	str[0] = 'b'; 
	printf("%s\n%c",line,str[0]);
	char *string = "hell0";
	string[2] = 'b';
	printf("\n%c",string[2]); 
}
