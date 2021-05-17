//// 과제 2-1 : "4.기본추상자료형_5"번 영상에서 설명한 생일 케이크 문제의 시뮬레이션 프로그램을 작성하세요. 프로그램은 배열_ver.1, 배열_ver2, 원형연결리스트를 이용한 방법을 모두
////사용하여야 합니다.
//
//// 본 과제에서 해당 파일은 '배열_ver1"와 "배열_ver2"를 구현한 것이다.
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
//// 배열_ver1
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
//		printf("제거한 위치 %d, 남은 양초 수 %d \n", A[r], n-1);
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
////배열_ver2
//
//int runSimulation_ver2(int A[],int n)
//{
//	int r = 0;
//	while (n > 1)
//	{
//		r = (r + k) % n;
//		printf("제거한 위치 %d, 남은 양초 수 %d \n", A[r], n-1);
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
//	printf("array_ver1 :원형배치에서 특수양초의 위치는 %d",runSimulation_ver1(A,n));
//#endif
//
//#if 0
//	printf("array_ver2 : 원형배치에서 특수양초의 위치는 %d",runSimulation_ver2(A,n));
//#endif
//}