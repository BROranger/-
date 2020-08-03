#include"SortType.h"
#include<iostream>

//�鲢����--ͳһ�����ӿ�
void Merge_Sort(ElementType A[], int N) {
	ElementType *TmpA;
	TmpA = new ElementType[N];
	if (TmpA != NULL) {
		MSort(A, TmpA, 0, N - 1);
		delete TmpA;
		TmpA = NULL;
	}
	else {
		printf("�ռ䲻��");
	}
}

void MSort(ElementType A[], ElementType TmpA[], int L, int RE) {
	int Center;
	if (L < RE) {
		Center = (L + RE) / 2;
		MSort(A, TmpA, L, Center);
		MSort(A, TmpA, Center + 1,RE);
		Merge(A, TmpA, L, Center + 1, RE);
	}
}

/*
��������������ϲ�Ϊһ���������飬�����������������鰤�ŷ���A��
L����һ����������
R���ڶ�����������
RE���ڶ���������յ�
A�����ŵ���������һ�������
*/
void Merge(ElementType A[], ElementType tmpA[], int L, int R, int RE) {
	int LE = R - 1; //�õ����������յ�λ�ã������������а���
	int Tmp = L;//��Ž������ĳ�ʼλ��
	int NumElements = RE - L + 1;
	while (L <= LE && R <= RE) {
		if (A[L] < A[R]) {
			tmpA[Tmp++] = A[L++];
		}
		else {
			tmpA[Tmp++] = A[R++];
		}
	}
	while (L <= LE)
		tmpA[Tmp++] = A[L++];
	while (R <= RE)
		tmpA[Tmp++] = A[R++];
	for (int i = 0; i < NumElements; i++, RE--)
		A[RE] = tmpA[RE];
}