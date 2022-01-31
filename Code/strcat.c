#include<stdio.h>
#include<string.h>

int main(){
	char n[] = "Hello,";
	char s[] = "Word!";
//	strcat(n,s);
	strncat(n,s,1);
	printf("%s",n);
}
