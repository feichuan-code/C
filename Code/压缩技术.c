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
    spot����˼�ǵ�ǰӦ�������1����0��������Ϳ���
    ��spot=!spot���ı�spot��ֵ
*/
    scanf("%d",&n);
    r=n*n;//�ȿ���Χ
    while(r)
	{
		scanf("%d",&a);
        r=r-a;
		for(i=0;i<a;i++)//���a������
		{
			printf("%d",spot);
/*
            ���spot�Ϳ����ˣ���Ϊ������ŵ������ǵ�ǰӦ�����������
*/
            line++;//�ۼ�
            if(line==n)//Ӧ�û�����
            {
				line=0;//���ñ���line
                printf("\n");
            }
        }
		spot=!spot;
/*
		��һ�仰����Ҫ���������ǵ�ǰҪ���1��
        ��ô��仰�ͻ��spot��ֵȡ����
        �ȼ���
        	if(spot==1)
        		spot=0;
       	 	else
        		spot=1;
*/
    }
	system("pause");
	return 0;
}
