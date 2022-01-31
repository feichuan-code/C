#include<stdio.h>
#include<stdlib.h>
int main(void){
//	int number;
//	int *a;
//	int i; 
//	printf(" ‰»Î ˝¡ø:");
//	scanf("%d",&number);
//	//C99 int a[number]
//	a = (int*)malloc(number*sizeof(int));
//	for(i=0;i<number;i++){
//		scanf("%d",&a[i]);
//	}
//	for(i=number-1;i>=0;i--){
//		printf("%d\n",a[i]);
//	}
//	free(a);
	void *p;
	int cnt = 0;
	while((p = malloc(100*1024*1024))){
		cnt++;
	}
	printf("%d00MB",cnt);
	free(p);
	getch();
	
	
	
	int* twoSum(int* nums, int numsSize, int target) {
	    int i,j;
	    int *result=NULL;
	    for(i=0;i<numsSize-1;i++)
	    {
	        for(j=i+1;j<numsSize;j++)
	        {
	            if(nums[i]+nums[j]==target)
	            {
	                 result=(int*)malloc(sizeof(int)*2);
	                 result[0]=i;
	                 result[1]=j;
	                 return result;
	            }
	        }
	    }
	    return result;
	}

}
