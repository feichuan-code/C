//��λ������

#include<stdio.h>

void swap(int *a,int *b){
	int t;
	if(a>b){
	        t = *a;
	        *a = *b;
	        *b = t;
	    }
}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    swap(&a,&b);
    swap(&a,&c);
    swap(&b,&c);
//    int t;
//    if(a>b){
//        t = a;
//        a = b;
//        b = t;
//    }
//    if(a>c){
//        t =a;
//        a = c;
//        c= t;
//    }
//    if(b > c){
//        t = b;
//        b = c;
//        c = t;
//    }
    printf("%d %d %d",a,b,c);
}
