#include<stdio.h>

#define URL "\"http://ifeichuan.cn\""
#define Name "川川工作室"
#define Boss "扉川"
#define Year 2005
#define Month 10
#define Day 16

int main(){
	 char a[]="11111";
	
	printf("%s成立于%d年%d月%d日\n",Name,Year,Month,Day);
	printf("%s是%s创立的....\n",Name,Boss);
	printf("%s的域名是%s\n",Name,URL);
	printf("%s",a);
	
	return 0;
}
