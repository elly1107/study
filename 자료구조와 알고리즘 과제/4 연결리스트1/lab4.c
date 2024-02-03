#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct ListNode { 	// ��� Ÿ��
	element data;
	struct ListNode *link;
} ListNode;

ListNode* insert_first(ListNode *head, element value)
{
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));	//(1)
	p->data = value;					// (2)
	p->link = head;	// ��� �������� ���� ����	//(3)
	head = p;	// ��� ������ ����		//(4)
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
	// ��ȸ �����ͷ� p, q, r�� ���
	ListNode *p, *q, *r;

	p = head;         // p�� head���� �����Ͽ� ���� ��带 ������
	q = NULL;        // q�� NULL������ �ʱ�ȭ�Ͽ� ����
	while (p != NULL) {
		r = q;          // r�� q ���� ��带 ���
						// (�Ʒ����� ������ q�� �ٲ�� ���� ���) 						
		q = p;			// q�� p ���� ��带 ���
						// (�Ʒ����� ������ p�� �ٲ�� ���� ���) 
		p = p->link;	// ���Ḯ��Ʈ�� ���� ��带 ������ 
		q->link = r;      // q�� ��ũ ������ r�� �ٲ۴�(r�� q ���� ��带 ���) 
	}
	return q;
}
// �׽�Ʈ ���α׷�
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
