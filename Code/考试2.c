#include <stdio.h>
#include <conio.h> 

main()
{
/***********SPACE***********/
        int a, b, c, max;
        printf("��������������:\n");
        scanf("%d,%d,%d",&a, &b, &c);
        printf("��������:%d,%d,%d.", a, b, c);
/***********SPACE***********/
        if (a > b)  max = a;
        else max=b; 
/***********SPACE***********/
        if (max < c) max=c;
        printf("�������:%d.", max);
}
