#include<stdio.h>
int swap(int a,int b){
    while(b!=0){
        int t;
        t = a%b;
        a = b;
        b = t;
    }
    return a;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    while(a>b&&b<c){
        int t;
        t = a;
        a = b;
        b = c;
        c = t;
    }
	int t=swap(a,c);
    a/=t,c/=t;
    printf("%d/%d",a,c);
}
