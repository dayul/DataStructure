#include <stdio.h>
int main(void) {
	int m, n, r, t;
	printf("양의 정수1을 입력하세요: ");
	scanf_s("%d", &m);
	printf("양의 정수1을 입력하세요: ");
	scanf_s("%d", &n);
	int Om = m;
	int On = n;

	if (m < n) {
		t = m;
		m = n;
		n = t;
	}

	while ((r = m % n) != 0) {
		m = n;
		n = r;
	}

	printf(" %d와 %d의 최대공약수 : % d\n", Om, On, n);

	return 0;
}