#include"stdio.h"

//�������ܣ���1-3+5-7+��-+n��ֵ
int fun(int n)
{
int i,s=0,f=1;//i����Ϊѭ��������sΪ1-3+5-7+��-n��ֵ
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

