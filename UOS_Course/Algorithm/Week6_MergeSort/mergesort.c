#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define _CRT_OBSOLETE_NO_WARNINGS
#define MAX_SIZE 15


// 합병정렬의 단점 : 배열이 필요하다. sorted는 저장을 위한 배열임
int sorted[MAX_SIZE];

void merge(int list[], int left, int mid, int right) {
	int i = left;
	int j = mid + 1;
	// k는 배열을 위한 것임
	int k = left;
	int l;
	// 크기 비교 후 배열에 값을 저장
	while (i <= mid && j <= right) {
		if (list[i] <= list[j])
			sorted[k++] = list[i++];
		else
			sorted[k++] = list[j++];
	}
	// 크기 비교 후 남은 값들을 저장
	if (i > mid)
		for (l = j; l <= right; l++)
			sorted[k++] = list[l];
	else
		for (l = i; l <= mid; l++)
			sorted[k++] = list[l];
	for (l = left; l <= right; l++)
		list[l] = sorted[l];
}


void merge_sort(int list[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		// 분할
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		//정복
		merge(list, left, mid, right);
	}
}


void main() {
	int list[MAX_SIZE];
	srand(time(NULL));
	for (int i = 0; i < MAX_SIZE; i++) {
		list[i] = rand() % 100;
		for (int j = 0; j < i; j++)
			if (list[i] == list[j])
				i--;
	}

	for (int i = 0; i < MAX_SIZE; i++)
		printf("[%d]", list[i]);
	printf("\n\n"); getchar();

	merge_sort(list, 0, MAX_SIZE - 1);
	for (int i = 0; i < MAX_SIZE; i++)
	{
		printf("[%d]", list[i]);
		Sleep(500);
	}
	printf("\n");
}