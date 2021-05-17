#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ELEMENT 100

// ���� ������ ��� �� ã��

// struct heap, initHeap, upHeap, insertItem, printHeap
// struct stack, initstack, isempty, push, pop


//�����ؾ��� �Լ� : binaryExpansion(), FindLastNode()

typedef int element;

typedef struct {
	element data[MAX_ELEMENT];
	int top;
} StackType;

void init_stack(StackType* s) {
	s->top = -1;
}

int is_empty(StackType* s) {
	return(s->top == -1);
}

int is_full(StackType* s) {
	return (s->top == (MAX_ELEMENT - 1));
}

void push(StackType* s, element item) {
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ���� \n");
		return;
	}
	else s->data[++(s->top)] = item;
}

element pop(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ���� \n");
		exit(1);
	}
	else return s->data[(s->top)--];
}


typedef struct {
	int heap[MAX_ELEMENT];
	int heap_size;
} HeapType;


void init_heap(HeapType* h) {
	h->heap_size = 0;
}


void upHeap(HeapType* h) {
	int i = h->heap_size;
	int key = h->heap[i];

	while ((i != 1) && (key < h->heap[i / 2])) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = key;
}


void insertItem(HeapType* h, int key) {
	h->heap_size += 1;
	h->heap[h->heap_size] = key;
	upHeap(h);
}

void printHeap(HeapType* h) {
	for (int i = 1; i <= h->heap_size; i++) {
		printf("[%d]", h->heap[i]);
	}
	printf("\n");
}

void binaryExpansion(int i, StackType* S) {
	while (i >= 2) {
		push(S, i % 2);
		i = i / 2;
	}
	push(S, i);
	return;
}

int findLastNode(HeapType * h, int v, int n) {
	StackType S;
	init_stack(&S);
	binaryExpansion(n, &S);
	pop(&S);
	int i = 1;
	while (!is_empty(&S)) {
		int bit = pop(&S);
		if (bit == 0) {
			i = i * 2;
			v = h->heap[i];
		}
		else {
			i = i * 2 + 1;
			v = h->heap[i];
		}
			
	}
	return v;
}


void main() {
	HeapType heap;
	init_heap(&heap);

	// 5, 3, 7, 4, 1, 4, 8, 2 ������ �� ����
	insertItem(&heap, 5);
	insertItem(&heap, 3);
	insertItem(&heap, 7);
	insertItem(&heap, 4);
	insertItem(&heap, 1);
	insertItem(&heap, 4);
	insertItem(&heap, 8);
	insertItem(&heap, 2);
	printHeap(&heap);

	printf("lastnode value is [%d]",findLastNode(&heap,heap.heap[1],heap.heap_size));


}