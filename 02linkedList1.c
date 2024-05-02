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
	p->data = input;		// data에 ' '이 들어감
	p->link = NULL;			// 임시로 NULL저장

	printf("데이터 입력: ");
	scanf_s("%c", &input, 1);		// 1이라는 문자열의 길이를 줌
	getchar();						// 문자 1개를 입력받음 => 위 문장 입력 후 enter를 받음

	while (input != '0') {
		p->link = (struct node*)malloc(sizeof(struct node));
		p = p->link;				// 다음 노드의 주소값
		p->data = input;			// 다음 노드의 data값에 저장
		p->link = NULL;

		printf("데이터 입력: ");
		scanf_s("%c", &input, 1);
		getchar();
	}

	p = head->link;		
	while (p != NULL) {
		printf("%c", p->data);
		if (p->link != NULL)	printf("->");
		p = p->link;			// 다음 노드로 이동시킴
	}
	printf("\n");

	return 0;
}