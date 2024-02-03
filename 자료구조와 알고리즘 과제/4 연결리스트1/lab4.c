#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct ListNode { 	// 노드 타입
	element data;
	struct ListNode *link;
} ListNode;

ListNode* insert_first(ListNode *head, element value)
{
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));	//(1)
	p->data = value;					// (2)
	p->link = head;	// 헤드 포인터의 값을 복사	//(3)
	head = p;	// 헤드 포인터 변경		//(4)
	return head;
}

void print_list(ListNode *head)
{
	ListNode *p;
	for (p = head; p != NULL; p = p->link)
		printf("%d->", p->data);
	printf("NULL \n");
}
ListNode* reverse(ListNode *head)
{
	// 순회 포인터로 p, q, r을 사용
	ListNode *p, *q, *r;

	p = head;         // p는 head부터 시작하여 다음 노드를 포인팅
	q = NULL;        // q는 NULL값으로 초기화하여 시작
	while (p != NULL) {
		r = q;          // r은 q 이전 노드를 기억
						// (아래에서 포인터 q가 바뀌기 전에 기억) 						
		q = p;			// q는 p 이전 노드를 기억
						// (아래에서 포인터 p가 바뀌기 전에 기억) 
		p = p->link;	// 연결리스트의 다음 노드를 포인팅 
		q->link = r;      // q의 링크 방향을 r로 바꾼다(r은 q 이전 노드를 기억) 
	}
	return q;
}
// 테스트 프로그램
int main(void)
{
	ListNode* head1 = NULL;
	ListNode* head2 = NULL;

	head1 = insert_first(head1, 10);
	head1 = insert_first(head1, 20);
	head1 = insert_first(head1, 30);
	print_list(head1);

	head2 = reverse(head1);
	print_list(head2);
	return 0;
}
