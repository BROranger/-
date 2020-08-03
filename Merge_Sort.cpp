#include"SortType.h"
#include<iostream>

//归并排序--统一函数接口
void Merge_Sort(ElementType A[], int N) {
	ElementType *TmpA;
	TmpA = new ElementType[N];
	if (TmpA != NULL) {
		MSort(A, TmpA, 0, N - 1);
		delete TmpA;
		TmpA = NULL;
	}
	else {
		printf("空间不足");
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
将两个有序数组合并为一个有序数组，假设这两个有序数组挨着放在A中
L：第一个数组的起点
R：第二个数组的起点
RE：第二个数组的终点
A：待排的两个连在一起的数组
*/
void Merge(ElementType A[], ElementType tmpA[], int L, int R, int RE) {
	int LE = R - 1; //得到左边数组的终点位置，假设左右两列挨着
	int Tmp = L;//存放结果数组的初始位置
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