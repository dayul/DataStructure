#include <stdio.h>

void HanoiTower(int n, char a, char b, char c) {		// a:����� ����, b:������ ����, c: ������ ����
	if (n == 1)	printf("���� %d, %c -> %c\n", n, a, c);		// n : ���ǹ�ȣ
	else {
		HanoiTower(n - 1, a, c, b);			// d : ������
		printf("���� %d, %c -> %c\n", n, a, c);			
		HanoiTower(n - 1, b, a, c);
	}
}

int main(void) {
	int n = 4;		// ������ ����

	HanoiTower(n, 'A', 'B', 'C');			// ���� ����, �����, ������, ������

	return 0;
}