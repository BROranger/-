#include"SortType.h"

ElementType FindMin(ElementType A[], int N, int i) {
	int j, k = i;
	for (j = i + 1; j < N; j++) {
		if (A[k] > A[j]) {
			k = j;
		}
	}
	return k;
}

void Select_Sort(ElementType A[], int N) {
	int i, min, tmp;
	for (i = 0; i < N-1; i++) {
		min = FindMin(A, N, i);
		if (min != i) {
			tmp = A[i];
			A[i] = A[min];
			A[min] = tmp;
		}
	}
}