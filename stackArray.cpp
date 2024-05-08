#include <stdio.h>
#define SIZE 6

int stack[SIZE];
int top = -1;

int push(int data) {
	if (top == SIZE - 1) { 
		printf("stack is full! (overflow) \n");
		return -1;
	}

	stack[++top] = data;
	return 0;
}

int pop(void) {
	if (top == -1) {
		printf("stack is empty! (underflow)\n");
		return -1;
	}
	return stack[top--];
}

int main(void) {
	// ���������� ����Ǿ��ٴ� ������ 0�� return��
	push(10);
	push(20);
	push(30);
	//push(40);
	//push(50);
	//push(60);
	//push(70);		overflow

	printf("%d\n", pop());		// 30 ���
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());		// �޼����� -1 ���
}