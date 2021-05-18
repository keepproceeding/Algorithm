//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_ELEMENT 100
//
//// 최소힙 구현
//// 배열에 기초한 힙 구현
//
//
//typedef struct {
//	int heap[MAX_ELEMENT];
//	int heap_size;
//} HeapType;
//
//
//void init(HeapType* h) {
//	h->heap_size = 0;
//}
//
//
//void upHeap(HeapType* h) {
//	int i = h->heap_size;
//	int key = h->heap[i];
//
//	while ((i != 1) && (key < h->heap[i / 2])) {
//		h->heap[i] = h->heap[i / 2];
//		i /= 2;
//	}
//	h->heap[i] = key;
//}
//
//
//void downHeap(HeapType* h) {
//	int temp = h->heap[1];
//	int parent = 1, child = 2;
//
//	while (child <= h->heap_size) {
//		if ((child < h->heap_size) && (h->heap[child] > h->heap[child + 1]))
//			child++;
//		if (temp <= h->heap[child])
//			break;
//		h->heap[parent] = h->heap[child];
//		parent = child;
//		child *= 2;
//	}
//	h->heap[parent] = temp;
//}
//
//
//int removeMin(HeapType* h) {
//	int key = h->heap[1];
//	h->heap[1] = h->heap[h->heap_size];
//	h->heap_size -= 1;
//	downHeap(h);
//	return key;
//}
//
//
//
//void insertItem(HeapType* h, int key) {
//	h->heap_size += 1;
//	h->heap[h->heap_size] = key;
//	upHeap(h);
//}
//
//
//// default print 
//// 제자리 정렬 후 printHeap이 안되는 이유는..? --> 간단하다. printHeap에서는 heap_size를 사용하는데, 제자리 정렬 함수에서 heap_size가 고정이 아니라 감소하기 때문에, 
//// 제자리 정렬 함수 마지막에 h->heap_size = size; 를 해줘야 아래의 printHeap이 작동한다.
//void printHeap(HeapType* h) {
//	for (int i = 1; i <= h->heap_size; i++) {
//		printf("[%d]", h->heap[i]);
//	}
//	printf("\n");
//}
//
//
//// 새로 정렬된 배열인 list를 출력 -> 그냥 sort 후 사용
//
//void printArray(int list[], int n) {
//	for (int i = 1; i <= n; i++) {
//		printf("[%d]", list[i]);
//	}
//	printf("\n");
//}
//
//
//
//void heapSort(HeapType* h, int list[]) {
//	HeapType heap; 
//	init(&heap);
//	for (int i = 1; i <= h->heap_size; i++) {
//		heap.heap[i] = h->heap[i];
//		heap.heap_size++;
//	}
//	for (int i = 1; i <= h->heap_size; i++) {
//		list[i] = removeMin(&heap); // 정렬될 저장소 list에 저장
//	}
//}
//
//// 최대힙 구현 후 내림차순 제자리 정렬
//void inPlaceHeapSort(HeapType* h) {
//	int size = h->heap_size;
//	int key;
//	for (int i = 0; i < size; i++) {
//		key = removeMin(h);
//		h->heap[h->heap_size + 1] = key;
//	}
//}
//
//void main() {
//	HeapType heap;
//	int list[MAX_ELEMENT] = { 0 };
//	srand(time(NULL));
//	init(&heap);
//	for (int i = 0; i < 15; i++)
//		insertItem(&heap, rand() % 100);
//
//	printHeap(&heap);
//
//	/*insertItem(&heap, 5);
//	insertItem(&heap, 3);
//	insertItem(&heap, 7);
//	insertItem(&heap, 4);
//	insertItem(&heap, 1);
//	insertItem(&heap, 4);
//	insertItem(&heap, 8);
//	insertItem(&heap, 2);*/
//	
//	//heapSort(&heap, list);
//	//printArray(list, heap.heap_size);
//
//	inPlaceHeapSort(&heap);
//	for (int i = 1; heap.heap[i] > 0; i++)
//		printf("[%d]", heap.heap[i]);
//	
//	//printf("deleted key : %d\n", removeMin(&heap));
//	
//}