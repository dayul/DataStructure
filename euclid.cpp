#include <stdio.h>

int euclid(int m, int n) {
	int r;		// 나머지
	while ((r = m % n) != 0) {
		m = n;
		n = r;
	}

	return n;		// 최대공약수
}

int main(void) {
	int m, n, t;
	printf("양의 정수: ");
	scanf_s("%d", &m);

	printf("양의 정수: ");
	scanf_s("%d", &n);

	if (m < n) {
		t = m;
		m = n;
		n = t;
	}

	// 여기에 코드를 넣기(최대공약수 구하는 코드)

	printf("%d와 %d의 최대공약수 : %d\n", m, n, euclid(m,n));
	return 0;
}