//// 과제 1 : "4. 기본추상자료형_2"번 영상에서 구현한 단순연결리스트 프로그램을 완성하세요. 영상에서 애기했던 삭제 관련함수들을 추가하여 완성하면 됩니다.
//
//// 본 과제에서 해당 파일의 삭제 관련 함수는 각각 removeFirst와 removeLast 함수로 구현하였다. 
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
// //head pointer 지정
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
//// remove first 선언
//void removeFirst(LinkedListType* L);
//// remove last 선언
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
//	//printf("\n몇 번 노드의 값을 반환할까요?");
//	//scanf_s("%d", &pos);
//	//printf("%d번 노드의 값은 %d\n", pos, get(&list, pos));
//
//	addLast(&list, 70); printList(&list);
//
//	printf("removeFirst 함수 실행 후의 리스트\n");
//	removeFirst(&list); printList(&list);
//
//	printf("removeLast 함수 실행 후의 리스트\n");
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
// // 해당 위치의 값 반환
//int get(LinkedListType* L, int pos)
//{
//	ListNode* p = L->head;
//	for (int i = 1; i < pos; i++)
//		p = p->link;
//	return p->data;
//}
//
// 
//  // 해당 위치의 값 변경
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
//// remove first 정의
//
//void removeFirst(LinkedListType* L)
//{
//	L->head = L->head->link;
//}
//
//// revove last 정의
//
//void removeLast(LinkedListType* L)
//{
//	ListNode* before = L->head;
//	for (before = before->link; before->link->link != NULL; before = before->link)
//		;
//
//	before->link = NULL;
//}
