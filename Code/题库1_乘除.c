#include"stdio.h"

//fun�������ܣ�������1000���ڣ�ǰn�����ܱ�2,3,5,7���������������Щ���ĺ�
int  fun(int n)  
{

        int i,j=0,a[20],sum=0; //ǰ20�����ܱ�2,3,5,7��������������a�����У����ǵĺͱ�����sum�С�
        /**********Program**********/
		for(i=0;i<1000;i++){
			if(i%2==0 || i%3==0 ||i%5==0 || i%7==0){
			}
			else{	
					printf("i = %d\n",i);
					a[j++] = i;
					sum+=i;
			}
			if(j == 19){
				break;
			}
		}
       /**********  End  **********/
       return sum;

}


void main()
{
        printf("��Ϊ��%d\n",fun(20));
}



//void wwjt()
//{
//        FILE *IN,*OUT;
//        int i,n;
//        IN=fopen("in.dat","r");
//        if(IN==NULL)
//        {
//                printf("Please Verify The Current Dir..It May Be Changed");
//        }
//        OUT=fopen("out.dat","w");
//        if(OUT==NULL)
//        {
//                printf("Please Verify The Current Dir.. It May Be Changed");
//        }
//        for(i=0;i<5;i++)
//        { 
//                fscanf(IN,"%i",&n);
//                fprintf(OUT,"%ld\n",fun(n));  
//        }
//        
//        fclose(IN);
//        fclose(OUT);
//}
