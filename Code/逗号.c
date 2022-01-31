#include<stdio.h>

int main(){
	int iX = 3,iY = 3,iZ;
	iZ = iX*4,iY++,iX *= 2,iX*iY;
	printf("%d %d %d",iX,iY,iZ);
}
