#include <stdio.h>
#define SIZE 6

int queue[SIZE];
int rear = -1;
int front = 0;

int add(int data) {

	if (rear == SIZE - 1) {
		printf("Queue is Full! \n");
		return -1;
	}
	else {
		queue[++rear] = data;
		return 0;
	}
}

int delete(void) {

	if (front > rear) {
		printf("Queue is Empty! \n");
		return -1;
	}
	return queue[front++];
}

int main(void) {
	add(10);	// 0
	add(20);	// 1
	add(30);	// 2
	add(40);	// 3
	add(50);	// 4

	printf("%d\n", delete());	// 0, 10이 return
	printf("%d\n", delete());	// 1
	printf("%d\n", delete());	// 2
	printf("%d\n", delete());	// 3
	printf("%d\n", delete());	// 4
	printf("%d\n", delete());	// 5, underflow 발생

	add(60);		// rear는 이때 5 (add가능)
	add(70);					// overflow 발생

	return 0;
}