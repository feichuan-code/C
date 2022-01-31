#include <stdio.h>
#include <conio.h> 

main()
{
/***********SPACE***********/
        int a, b, c, max;
        printf("请输入三个整数:\n");
        scanf("%d,%d,%d",&a, &b, &c);
        printf("三个数是:%d,%d,%d.", a, b, c);
/***********SPACE***********/
        if (a > b)  max = a;
        else max=b; 
/***********SPACE***********/
        if (max < c) max=c;
        printf("最大数是:%d.", max);
}
