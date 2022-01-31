//³ÌÐò²ÎÊý

#include<stdio.h>
//	argv[2] = "1";
int main(int argc,char const *argv[]){
	int ch;
	while((ch = getchar())!= EOF){
		putchar(ch); 
	}
	printf("EOF");
//	for(int i=0;i<argc;i++){
//			printf("%d:%s\n",argc,argv[i]);
////	}
//	int c = 1111111;
//	int s = putchar(int c);
//	printf("%d",s);
	return 0;
} 
