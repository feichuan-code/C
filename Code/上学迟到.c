#include<stdio.h>

int main(){
    int time = 469;
    double s,u;
    int chu;
    scanf("%lf %lf",&s,&u);
    chu = (int)s/u;
    if (s/u!=chu)
    {
        chu +1;
    }
    if ((time-chu)/60 < 10)//ÊÇ·ñ²¹0
    {
        printf("0%d:",(time-chu)/60);
        if ((time-chu)%60<10)
        {
            printf("0%d",(time-chu)%60);
        }
        else{
                printf("%d",(time-chu)%60);      
        }
        
    }
    else{
        printf("%d:",(time-chu)/60);
        if ((time-chu)%60<10)
        {
            printf("0%d",(time-chu)%60);
        }
        else{
                printf("%d",(time-chu)%60);         
        }
    }
    
    
    
}