#include<stdio.h>
int Maopao(int array[],int n;);
int main(){
	int n = 0;
	scanf("%d",&n);
	int nums[n];
	for(int i=0;i<n;i++){
		scanf("%d ",&nums[i]);
	}
	Maopao(nums,n);
	
}

int Maopao(int array[],int n){
		
		    int i = 0;
		    int j = 0;
		    int temp;
		    for ( i = 0; i < n-1; i++)
		    {
		        for ( j = 0; j < n-1-i; j++)
		        {
		            if(array[j]>array[j+1])
		            {
		                temp=array[j];
		                array[j]=array[j+1];
		                array[j+1]=temp;
		            }
		        }
		        
		    }
		
		
		    for ( i = 0; i < n; i++)
		    {
		       printf("%d",array[i]);
		    }
	}
