//// ���� 1 : "4. �⺻�߻��ڷ���_2"�� ���󿡼� ������ �ܼ����Ḯ��Ʈ ���α׷��� �ϼ��ϼ���. ���󿡼� �ֱ��ߴ� ���� �����Լ����� �߰��Ͽ� �ϼ��ϸ� �˴ϴ�.
//
//// �� �������� �ش� ������ ���� ���� �Լ��� ���� removeFirst�� removeLast �Լ��� �����Ͽ���. 
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct ListNode
//{
//	int data;
//	struct ListNode* link;
//} ListNode;
//
// 
// //head pointer ����
//typedef struct
//{
//	ListNode* head;
//
//}LinkedListType;
//
//
//
//void init(LinkedListType* L);
//void addFirst(LinkedListType* L, int item);
//void add(LinkedListType* L, int pos, int item);
//void addLast(LinkedListType* L, int item);
//int get(LinkedListType* L, int pos);
//void set(LinkedListType* L, int pos, int item);
//void printList(LinkedListType* L);
//
//// remove first ����
//void removeFirst(LinkedListType* L);
//// remove last ����
//void removeLast(LinkedListType* L);
//
//
//void main()
//{
//	LinkedListType list;
//	init(&list);
//
//	addFirst(&list, 10); printList(&list);
//	addFirst(&list, 20); printList(&list);
//	addFirst(&list, 30); printList(&list);
//
//	add(&list, 1, 40); printList(&list);
//	add(&list, 1, 50); printList(&list);
//	add(&list, 1, 60); printList(&list);
//	//int pos;
//	//printf("\n�� �� ����� ���� ��ȯ�ұ��?");
//	//scanf_s("%d", &pos);
//	//printf("%d�� ����� ���� %d\n", pos, get(&list, pos));
//
//	addLast(&list, 70); printList(&list);
//
//	printf("removeFirst �Լ� ���� ���� ����Ʈ\n");
//	removeFirst(&list); printList(&list);
//
//	printf("removeLast �Լ� ���� ���� ����Ʈ\n");
//	removeLast(&list); printList(&list);
//}
//
//
//void init(LinkedListType* L)
//{
//	L->head = NULL;
//}
//
//void addFirst(LinkedListType* L, int item)
//{
//	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
//	node->data = item;
//	node->link = L->head;
//	L->head = node;
//}
//
//void add(LinkedListType* L, int pos, int item)
//{
//	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
//	ListNode* before = L->head;
//	for (int i = 0; i < pos - 1; i++)
//		before = before->link;
//
//	node->data = item;
//	node->link = before->link;
//	before->link = node;
//}
//
//void addLast(LinkedListType* L, int item)
//{
//	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
//	node->data = item;
//	ListNode* before = L->head;
//	for (before = before->link; before->link != NULL; before = before->link)
//		;
//	node->data = item;
//	node->link = NULL;
//	before->link = node;
//}
//
// 
// // �ش� ��ġ�� �� ��ȯ
//int get(LinkedListType* L, int pos)
//{
//	ListNode* p = L->head;
//	for (int i = 1; i < pos; i++)
//		p = p->link;
//	return p->data;
//}
//
// 
//  // �ش� ��ġ�� �� ����
//void set(LinkedListType* L, int pos, int item)
//{
//	ListNode* p = L->head;
//	for (int i = 1; i < pos; i++)
//		p = p->link;
//	p->data = item;
//}
//
//void printList(LinkedListType* L)
//{
//	for (ListNode* p = L->head; p != NULL; p = p->link)
//		printf("[%d] -> ", p->data);
//	printf("NULL\n");
//}
//
//
//// remove first ����
//
//void removeFirst(LinkedListType* L)
//{
//	L->head = L->head->link;
//}
//
//// revove last ����
//
//void removeLast(LinkedListType* L)
//{
//	ListNode* before = L->head;
//	for (before = before->link; before->link->link != NULL; before = before->link)
//		;
//
//	before->link = NULL;
//}
