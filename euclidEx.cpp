#include <stdio.h>
int main(void) {
	int m, n, r, t;
	printf("���� ����1�� �Է��ϼ���: ");
	scanf_s("%d", &m);
	printf("���� ����1�� �Է��ϼ���: ");
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

	printf(" %d�� %d�� �ִ����� : % d\n", Om, On, n);

	return 0;
}