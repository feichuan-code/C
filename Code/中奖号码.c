#include<stdio.h>

int main() {
	int x, count = 0, nums = 0, n;
	scanf("%d", &n);
	int Zj[7], GoodNums[7];
	for (int i = 0; i < 7; i++) {
		scanf("%d", &Zj[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		nums = 0;
		for (int j = 0; j < 7; j++) {
			if (x == Zj[j]) {
				nums++;
			}
		}
		if (nums != 0) {
			count++;
			GoodNums[nums] = nums;
		}
	}
	printf("%d ", count);
	for (int i = 6; i >= 0; i--) {
		printf("%d ", GoodNums[i]);
	}
}
