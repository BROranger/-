#include"SortType.h"

//ð�������㷨
void Bubble_Sort(ElementType A[],int N) {
	int flag;//���ڱ�ʾһ�������Ƿ��Ѿ����
	for (int i = 0; i < N-1; i++) {
		flag = 0;
		for (int j = N - 1; j > i; j--) {
			if (A[j] < A[j - 1]) {
				Swap(A[j], A[j - 1]);
				flag = 1;
			}
		}
		if (flag == 0) break;
	}
}

