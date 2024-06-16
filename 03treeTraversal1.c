#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* llink;
	char data;
	struct node* rlink;
};

struct node* createNode(char data) {
	struct node* p = (struct node*)malloc(sizeof(struct node));

	p->llink = NULL;
	p->data = data;
	p->rlink = NULL;
	return p;
}

//이진트리 소멸 (leaf 노드부터, 단말, 터미널 노드) - 후위운행과 진행되는 순서가 같음
void deleteAll(struct node *p) {
	if (p != NULL) {
		deleteAll(p->llink);	// L
		deleteAll(p->rlink);	// R
		printf("%c", p->data);	// D 출력
		free(p);				// F(free, 소멸)
	}
}


//전위운행
void preOrder(struct node *p) {
	if (p != NULL) {
		printf("%c", p->data);		// D 데이터 출력
		preOrder(p->llink);			// L 왼쪽을 따라가게 함
		preOrder(p->rlink);			// R 오른쪽을 따라가게 함
	}
}


//중위운행
void inOrder(struct node *p) {
	if(p != NULL) {
		inOrder(p->llink);			// L 왼쪽을 따라가게 함
		printf("%c", p->data);		// D 데이터 출력
		inOrder(p->rlink);			// R 오른쪽을 따라가게 함
	}
}

//후위운행
void postOrder(struct node *p) {
	if (p != NULL) {
		postOrder(p->llink);		// L 왼쪽을 따라가게 함
		postOrder(p->rlink);		// R 오른쪽을 따라가게 함
		printf("%c", p->data);		// D 데이터 출력
	}
}


int main(void) {
	struct node* root = createNode('A');		// A가 저장되어 있는 노드의 주소값을 root에 저장
	root->llink = createNode('B');				// root의 llink(A 노드)에 B노드를 생성 후 주소 저장
	root->rlink = createNode('C');				// root의 rlink에 C노드 생성 후 주소 저장
	root->llink->llink = createNode('D');		// 2번 감
	root->llink->rlink = createNode('E');
	root->rlink->rlink = createNode('F');
	root->llink->rlink->llink = createNode('G');
	root->rlink->rlink->llink = createNode('H');
	root->rlink->rlink->rlink = createNode('I');
	root->llink->rlink->llink->rlink = createNode('J');

	printf("전위 운행(preOrder)  : ");
	preOrder(root); printf("\n");

	printf("중위 운행(inOrder)   : ");
	inOrder(root); printf("\n");

	printf("후위 운행(postOrder) : ");
	postOrder(root); printf("\n");

	deleteAll(root);

	return 0;
}