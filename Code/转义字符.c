//转义字符 

#include<stdio.h>

int main(){
	
//\正确示范 
	print\
f\
	("Hello \
	World!\n");
/*“\”后会从下一行开头开始读取
如果没有字符，则会读取缩进 
 
*/
printf("Hell\a\ao World\n");//会响起系统声音..... 
printf("Hell\b\bo World\n");	
printf("Hell\f\fo World\n");	
printf("Hell\ro World\n");	
printf("Hello World\n");
printf("Hello Wo\t\trld");	
printf("Hello Wo\v\vrld");	
printf("Hello World\'扉川\'\n");	
printf("Hello World\"China\"\n");	
printf("Hello World\\\n");	


	return 0;
}
