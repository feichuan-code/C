//ISBNºÅÂë
#include<stdio.h>

int main() {
	char x, string[13];
	int number[11], j = 1, sum = 0;
	for (int i = 0; i < 13; i++) {
		scanf("%c", &x);
		string[i] = x;
		if (x >= '0' && x <= '9' && j <= 10) {
			number[j] = x - 48;
			sum += number[j] * j;
			j++;
		}
		if (x == 'X') {
			number[10] = 10;
			sum += number[j] * j;
		}

	}
	sum -= number[10] * 10;
//	for(int i=0;i<10;i++){
//		printf("%d ",number[i]);
//	}
//printf("%d",number[10]);
	if (sum % 11 == number[10]) {
		printf("Right");
	} else {
		for (int i = 0; i < 12; i++) {
			printf("%c", string[i]);

		}
		if (sum % 11 == 10) {
			printf("X");
		} else printf("%d", sum % 11);
	}
}
