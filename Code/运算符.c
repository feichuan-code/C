#include <stdio.h>
 
int main()
{
//ǰ��������̫�򵥣��ʲ�����ʾ��
    int a,b,c;
    //ȡ��
    a = 789;
    printf("\na%10�Ľ��Ϊ%d\n",a%10);
    //���Ϊ9
    //����
    a = b =10;
    printf("a++��ֵΪ%d\n",a++);
    printf("a��ֵΪ%d\n",a);
    //a++ = 10,a = 11
    printf("++b��ֵΪ%d\n",++b);
    printf("b��ֵΪ%d\n",b);
}
