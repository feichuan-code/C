#include <conio.h>
#include <stdio.h>

int main ()
{
/***********SPACE***********/
        int a,b;
        printf ("������һ������100��������:");
/***********SPACE***********/
        scanf ("%d",&a);
        b=(a%10)*100 + ((a/10)%10)*10 + (a/100)%10;
/***********SPACE***********/
        printf ("�����: %d\n",b); 
}
