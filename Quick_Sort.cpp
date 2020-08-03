#include"SortType.h"

//ѡ����Ԫ
ElementType GetPivot(ElementType A[], int Left, int Right) {
	int Center = (Left + Right) / 2;
	if (A[Left] > A[Center])
		Swap(A[Left], A[Center]);
	if (A[Left] > A[Right])
		Swap(A[Left], A[Right]);
	if (A[Center] > A[Right])
		Swap(A[Center], A[Right]);
	//��Centerλ�ô���Ԫ�ط�����Right��ǰһλ���������������
	Swap(A[Center], A[Right - 1]);
	return A[Right - 1];

}

//�㽭��ѧ��-ѡȡ��λ����Ϊ��Ԫ��������Ƭ�ν�Сʱ�����ò����������
//void QuickSort(ElementType A[], int L, int R) {
//	if (R - L > 2) {
//		int i = L, j = R - 1;
//		int Pivot = GetPivot(A, L, R);
//		while (1) {
//			while (A[++i] < Pivot) {}
//			while (A[--j] > Pivot) {}
//			if (i < j)
//				Swap(A[i], A[j]);
//			else
//				break;
//		}
//		Swap(A[i], A[R - 1]);
//		QuickSort(A, L, i - 1);
//		QuickSort(A, i + 1, R);
//	}
//	else {
//		Insertion_Sort(A + L, R - L + 1);
//	}
//}


//�人��ѧ��-ֱ��ѡȡ�����е�һ����Ϊ�ο�Ԫ,ֱ���ÿ�����������ȫ������
void QuickSort(ElementType A[], int L, int R) {
	int i = L, j = R;
	ElementType tmp;
	if (L < R) {
		tmp = A[L];
		while (i != j) {
			while (j > i && A[j] >= tmp) j--;
			A[i] = A[j];
			while (i < j && A[i] <= tmp) i++;
			A[j] = A[i];
		}
		A[i] = tmp;
		QuickSort(A, L, i - 1);
		QuickSort(A, i + 1, R);
	}
}

//ͳһ�ӿں���
void Quick_Sort(ElementType A[], int N) {
	QuickSort(A, 0, N - 1);
}