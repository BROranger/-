#include"SortType.h"

//���������㷨
void Insertion_Sort(ElementType A[],int N) {
	ElementType Temp;//����������ֵ
	int i, j;//i����������A��ÿһ��ֵ��j�ڲ�������Ʋ����λ��
	for (i = 1; i < N; i++) {
		Temp = A[i];
		for (j = i; j > 0 && A[j - 1] > Temp; j--) {
			A[j] = A[j-1];
		}
		A[j] = Temp;
	}
}

//�۰���������㷨
void Bin_Insertion_Sort(ElementType A[], int N) {
	int low, high, mid;
	ElementType Temp;
	int i, j;
	for (i = 1; i < N; i++) {
		if (A[i] < A[i - 1]) {
			Temp = A[i];
			low = 0;
			high = i - 1;
			while (low <= high) {
				mid = (low + high) / 2;
				if (Temp < A[mid]) {
					high = mid - 1;
				}
				else
				{
					low = mid + 1;
				}
			}
			//�ҵ�Ӧ����high+1��λ�ò���
			for (j = i - 1; j >= high + 1; j--) {
				A[j + 1] = A[j];
			}
			A[high + 1] = Temp;
		}
	}
}

