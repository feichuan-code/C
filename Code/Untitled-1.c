#include<stdio.h>

int main()
{
    int numA,numB;
    for (numA=1;numA<=9;numA++)
    {
        for (numB=1;numB<= numA;numB++)
        {
            printf("%d*%d = %-4d",numB,numA,numB*numA);
        }
        printf("\n");
    }
    
    return 0;
}
