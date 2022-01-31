#include<stdio.h>

int main(int argc,const char *argv[]){
    int x[7][2];
    for(int i;i < 7;i++){
        scanf("%d %d",&x[i][0],&x[i][1]);
    }
    int Max = 0,nums;
    for (int i = 0; i < 7; i++)
    {
        if (x[i][0]+x[i][1]>Max)
        {
            Max = (x[i][0]+x[i][1]);
            nums = i+1;
        }
    }

    printf("%d",nums);
}
