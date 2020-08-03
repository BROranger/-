#include"SortType.h"

//选择主元
ElementType GetPivot(ElementType A[], int Left, int Right) {
	int Center = (Left + Right) / 2;
	if (A[Left] > A[Center])
		Swap(A[Left], A[Center]);
	if (A[Left] > A[Right])
		Swap(A[Left], A[Right]);
	if (A[Center] > A[Right])
		Swap(A[Center], A[Right]);
	//将Center位置处的元素放置于Right的前一位，方便后续程序处理
	Swap(A[Center], A[Right - 1]);
	return A[Right - 1];

}

//浙江大学版-选取中位数作为主元；当排序片段较小时，采用插入排序法替代
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


//武汉大学版-直接选取数组中第一个作为参考元,直接用快速排序做完全部内容
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

//统一接口函数
void Quick_Sort(ElementType A[], int N) {
	QuickSort(A, 0, N - 1);
}