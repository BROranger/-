#include"SortType.h"

//希尔排序算法
void Shell_Sort(ElementType A[], int N) {
	int D, tmp;
	int i, p;
	for (D = N / 2; D > 0; D = D / 2) {
		//采用插人排序算法
		for (p = D; p < N; p++) {
			tmp = A[p];
			for (i = p; i >= D && A[i - D] > tmp; i -= D) {
				A[i] = A[i - D];
			}
			A[i] = tmp;
		}
	}
}