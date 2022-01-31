#include<stdio.h>
#include<string.h>

int mylen(const char *s){
	int cnt = 0;
//	for(int i=0;s[i]!=0;i++){
//		cnt++;
//	}
//÷∏’Î_ 
	while(*s++) cnt++;
	return cnt;
}
int mycmp(const char *s1,const char *s2){
	int idx = 0;
	while(s1[idx] == s2[idx]&&s1[idx]){
//		if(s1[idx] != s2[idx]){
//			break;
//		}
		idx++;
	}
	return s1[idx] - s2[idx];
}
int mycpy(char *restrict det,const char *restrict src){
//	int cnt = 0;
//	while(src[cnt]){
//		det[cnt] = src[cnt];
//		cnt++;
//	}
//	det[cnt] = src[cnt];
//  return det;
//÷∏’Î∞Ê±æ
	int *n = det;
	while(*det++= *src++){
//		*det++ = *src++;
		
	}
	return n;
}
int main(){
//	char s[] = "hello\0";
//	printf("%d\n",strlen(s));
//	printf("%d",mylen(s));
	char s1[] = "a123"; 
	char s2[] = "ssa123";
	printf("%s",strchr(strchr(s1,'1')+1,'2'));
} 
