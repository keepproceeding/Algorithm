//// ���� 2-1 : "4.�⺻�߻��ڷ���_5"�� ���󿡼� ������ ���� ����ũ ������ �ùķ��̼� ���α׷��� �ۼ��ϼ���. ���α׷��� �迭_ver.1, �迭_ver2, �������Ḯ��Ʈ�� �̿��� ����� ���
////����Ͽ��� �մϴ�.
//
//// �� �������� �ش� ������ '�迭_ver1"�� "�迭_ver2"�� ������ ���̴�.
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 7
//#define k 3
//
//void buildList(int A[], int n);
//int runSimulation_ver1(int A[],int n);
//int runSimulation_ver2(int A[],int n);
//void remove1(int A[],int n, int pos);
//void candle(int A[], int n);
//
//void main(void)
//{
//	int n = N;
//	int A[N];
//	candle(A,n);
//}
//
//void buildList(int A[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		A[i] = i + 1;
//	}
//}
//
//
//// �迭_ver1
//
//int runSimulation_ver1(int A[], int n)
//{
//	int r = 0;
//	while (n > 1)
//	{
//		int i = 0;
//		while (i < k)
//		{
//			r = (r + 1) % N;
//			if (A[r] != 0)
//				i = i + 1;
//		}
//		printf("������ ��ġ %d, ���� ���� �� %d \n", A[r], n-1);
//		A[r] = 0;
//		n = n - 1;
//		while (A[r] == 0)
//			r = (r + 1) % N;
//	}
//	return A[r];
//}
//
//void remove1(int A[],int n, int pos)
//{
//	for (int i = pos; i < n - 1; i++)
//	{
//		A[i] = A[i + 1];
//	}
//}
//
////�迭_ver2
//
//int runSimulation_ver2(int A[],int n)
//{
//	int r = 0;
//	while (n > 1)
//	{
//		r = (r + k) % n;
//		printf("������ ��ġ %d, ���� ���� �� %d \n", A[r], n-1);
//		remove1(A,n, r);
//		n = n - 1;
//	}
//
//	return A[0];
//}
//
//void candle(int A[], int n)
//{
//	buildList(A, n);
//#if 1
//	printf("array_ver1 :������ġ���� Ư�������� ��ġ�� %d",runSimulation_ver1(A,n));
//#endif
//
//#if 0
//	printf("array_ver2 : ������ġ���� Ư�������� ��ġ�� %d",runSimulation_ver2(A,n));
//#endif
//}