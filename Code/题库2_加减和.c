#include"stdio.h"

//函数功能：求1-3+5-7+…-+n的值
int fun(int n)
{
int i,s=0,f=1;//i定义为循环变量，s为1-3+5-7+…-n的值
/**********Program**********/
	for(i=0;i<=n;i+=2){
		s=s+i*f;
		f= -f;
	}


/**********  End  **********/
        return s;
}

main()
{

        printf("%d",fun(101));
}

