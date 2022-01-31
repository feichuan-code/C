#include <conio.h>
#include <stdio.h>

int main ()
{
/***********SPACE***********/
        int a,b;
        printf ("请输入一个大于100的正整数:");
/***********SPACE***********/
        scanf ("%d",&a);
        b=(a%10)*100 + ((a/10)%10)*10 + (a/100)%10;
/***********SPACE***********/
        printf ("结果是: %d\n",b); 
}
