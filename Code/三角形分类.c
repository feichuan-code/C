//三角形分类
#include<stdio.h>

int main() {
	long long int a, b, c, sum;
	scanf("%lld%lld%lld", &a, &b, &c);
	int t;
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (a > c) {
		t = a;
		a = c;
		c = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	if (a + b > c) {
		if (c * c == a * a + b * b) {
			printf("Right triangle\n");
		}
		if (c * c < a * a + b * b) {
			printf("Acute triangle\n");
		}
		if (c * c > a * a + b * b) {
			printf("Obtuse triangle\n");
		}
		if (c * c > a * a + b * b && c + a == b + c) {
			printf("Isosceles triangle\n");
		}
		if (c * c < a * a + b * b && a == b && b == c) {
			printf("Equilateral triangle\n");
		}
	} else printf("Not triangle");
}
