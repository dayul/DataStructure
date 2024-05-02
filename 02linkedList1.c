#include <stdio.h>
#include <stdlib.h>

int main(void) {

	struct node{
		char data;
		struct node* link;
	};
	struct node* head, * p;

	char input = ' ';
	head = (struct node*)malloc(sizeof(struct node));
	p = head;
	p->data = input;		// data�� ' '�� ��
	p->link = NULL;			// �ӽ÷� NULL����

	printf("������ �Է�: ");
	scanf_s("%c", &input, 1);		// 1�̶�� ���ڿ��� ���̸� ��
	getchar();						// ���� 1���� �Է¹��� => �� ���� �Է� �� enter�� ����

	while (input != '0') {
		p->link = (struct node*)malloc(sizeof(struct node));
		p = p->link;				// ���� ����� �ּҰ�
		p->data = input;			// ���� ����� data���� ����
		p->link = NULL;

		printf("������ �Է�: ");
		scanf_s("%c", &input, 1);
		getchar();
	}

	p = head->link;		
	while (p != NULL) {
		printf("%c", p->data);
		if (p->link != NULL)	printf("->");
		p = p->link;			// ���� ���� �̵���Ŵ
	}
	printf("\n");

	return 0;
}