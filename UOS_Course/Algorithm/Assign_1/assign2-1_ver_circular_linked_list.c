// ���� 2-1 : "4.�⺻�߻��ڷ���_5"�� ���󿡼� ������ ���� ����ũ ������ �ùķ��̼� ���α׷��� �ۼ��ϼ���. ���α׷��� �迭_ver.1, �迭_ver2, �������Ḯ��Ʈ�� �̿��� ����� ���
//����Ͽ��� �մϴ�.

// �� �������� �ش� ������ '�������Ḯ��Ʈ"�� ������ ���̴�.

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
		printf("������ ��ġ %d, ���� ���� �� %d \n",pnext->data, n - 1);
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
	printf("�������Ḯ��Ʈ : ������ġ���� Ư�������� ��ġ�� %d",runSimulation(L));
}
