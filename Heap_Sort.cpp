#include"SortType.h"

void ShiftHeap(ElementType A[], int low, int high) {
	int i = low;
	int j = 2 * i + 1;//j表示i的左孩子
	ElementType tmp = A[i];
	while (j <= high) {
		if (j < high && A[j] < A[j + 1])j++;//使j指向左右孩子中的大的
		if (tmp < A[j]) {
			A[i] = A[j];
			i = j;
			j = i * 2 + 1;
		}
		else break;
	}
	A[i] = tmp;
}

void Heap_Sort(ElementType A[], int N) {
	int i;
	for (i = N / 2; i >= 0; i--) {
		ShiftHeap(A, i, N);
	}
	for (i = N - 1; i > 0; i--) {
		Swap(A[i], A[0]);
		ShiftHeap(A, 0, i - 1);
	}
}