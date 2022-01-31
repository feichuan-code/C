#include<stdio.h>
int main(){
    int n,t=10;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n-1;i++){
        
        if(t>a[i] ){
            t = a[i];
        }
    }
    printf("%d",t);
}
