// 과제 2-1 : "4.기본추상자료형_5"번 영상에서 설명한 생일 케이크 문제의 시뮬레이션 프로그램을 작성하세요. 프로그램은 배열_ver.1, 배열_ver2, 원형연결리스트를 이용한 방법을 모두
//사용하여야 합니다.

// 본 과제에서 해당 파일은 '원형연결리스트"를 구현한 것이다.

#include <stdio.h>
#include <stdlib.h>

#define N 7
#define k 3

typedef struct getnode
{
	int data;
	struct getnode* link;
} getnode;

typedef struct LinkedListType
{
	getnode* head;

}LinkedListType;


getnode* buildlist(LinkedListType*L, int n);
int runSimulation(LinkedListType* L);
void candle(LinkedListType* L,int n);


void main()
{
	int n = N;
	LinkedListType L;
	candle(&L, n);
}


getnode* buildlist(LinkedListType* L,int n)
{
	getnode* p = (getnode*)malloc(sizeof(getnode));
	L->head = p;
	p->data = 1;
	for (int i = 1; i < n; i++)
	{
		p->link = (getnode*)malloc(sizeof(getnode));
		p = p->link;
		p->data = i+1;
	}
	p->link = L->head;
	return L->head;
}

int runSimulation(LinkedListType* L)
{
	getnode* p = L->head;
	int n = N;
	while (p != p->link)
	{
		for (int i = 1; i < k; i++)
		{
			p = p->link;
		}
		getnode* pnext = p->link;
		printf("제거한 위치 %d, 남은 양초 수 %d \n",pnext->data, n - 1);
		p->link = p->link->link;
		free(pnext);
		p = p->link;
		n = n - 1;
	}
	return p->data;
}

void candle(LinkedListType* L,int n)
{
	buildlist(L,n);
	printf("원형연결리스트 : 원형배치에서 특수양초의 위치는 %d",runSimulation(L));
}
