#include <stdio.h>
 
int main()
{
//前几项由于太简单，故不做演示。
    int a,b,c;
    //取余
    a = 789;
    printf("\na%10的结果为%d\n",a%10);
    //结果为9
    //自增
    a = b =10;
    printf("a++的值为%d\n",a++);
    printf("a的值为%d\n",a);
    //a++ = 10,a = 11
    printf("++b的值为%d\n",++b);
    printf("b的值为%d\n",b);
}
