#include"SortType.h"

//插入排序算法
void Insertion_Sort(ElementType A[],int N) {
	ElementType Temp;//保存待插入的值
	int i, j;//i外层变量遍历A中每一个值，j内层变量控制插入的位置
	for (i = 1; i < N; i++) {
		Temp = A[i];
		for (j = i; j > 0 && A[j - 1] > Temp; j--) {
			A[j] = A[j-1];
		}
		A[j] = Temp;
	}
}

//折半插入排序算法
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
			//找到应该在high+1的位置插入
			for (j = i - 1; j >= high + 1; j--) {
				A[j + 1] = A[j];
			}
			A[high + 1] = Temp;
		}
	}
}

