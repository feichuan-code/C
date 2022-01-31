#include"stdio.h"

//fun函数功能：求出求出1000以内，前n个不能被2,3,5,7整除的数，求出这些数的和
int  fun(int n)  
{

        int i,j=0,a[20],sum=0; //前20个不能被2,3,5,7整除的数保存在a数组中，它们的和保存在sum中。
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
        printf("和为：%d\n",fun(20));
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
