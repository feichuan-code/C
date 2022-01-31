/* 查询成绩 */
#include<stdio.h>

int main(){
    int resultSX,resultYW,resultYY;

    printf("请分别输入你的成绩:\n");
    scanf("%d,%d,%d\n",&resultSX,&resultYW,&resultYY);
    printf("%-3d,%-3d,%-4d",resultSX,resultYW,resultYY);
    
    
    return 0;
}
