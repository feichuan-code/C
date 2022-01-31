//#include<stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int num[n*n+10];
//	int cnt = 0;
//	for(int i=0,sum = 0;sum<n*n;sum+=i){
//		scanf("%d",&i);
//		num[cnt++] = i;
//	}
//	int i = 1;
//	for(int j=0;j<cnt;j++){
//		for(int k=0;k<num[j];k++,i++){
//			if(j%2==0) printf("0");
//			else printf("1");
//			if(i%7==0){
//						printf("\n");
//					}
//		}
//		
//	}
//}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,n,line=0,spot=0,i,r;
/*
    spot的意思是当前应该是输出1还是0，输出完后就可以
    用spot=!spot来改变spot的值
*/
    scanf("%d",&n);
    r=n*n;//先看范围
    while(r)
	{
		scanf("%d",&a);
        r=r-a;
		for(i=0;i<a;i++)//输出a个数字
		{
			printf("%d",spot);
/*
            输出spot就可以了，因为里面存着的是我们当前应该输出的数；
*/
            line++;//累加
            if(line==n)//应该换行了
            {
				line=0;//重置变量line
                printf("\n");
            }
        }
		spot=!spot;
/*
		这一句话很重要，假设我们当前要输出1；
        那么这句话就会把spot的值取反，
        等价于
        	if(spot==1)
        		spot=0;
       	 	else
        		spot=1;
*/
    }
	system("pause");
	return 0;
}
