#include<stdio.h>

#define URL "\"http://ifeichuan.cn\""
#define Name "����������"
#define Boss "�鴨"
#define Year 2005
#define Month 10
#define Day 16

int main(){
	 char a[]="11111";
	
	printf("%s������%d��%d��%d��\n",Name,Year,Month,Day);
	printf("%s��%s������....\n",Name,Boss);
	printf("%s��������%s\n",Name,URL);
	printf("%s",a);
	
	return 0;
}
