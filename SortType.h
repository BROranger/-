#pragma once
#define ElementType int

//��������
void Swap(int &a, int &b);

//ð������
void Bubble_Sort(ElementType A[], int N);

//��������
void Insertion_Sort(ElementType A[], int N);

//�۰���������㷨
void Bin_Insertion_Sort(ElementType A[], int N);

//ϣ������
void Shell_Sort(ElementType A[], int N);

//�鲢����
void Merge_Sort(ElementType A[], int N);
void MSort(ElementType A[], ElementType TmpA[], int L, int RE);
void Merge(ElementType A[], ElementType tmpA[], int L, int R, int RE);

//�������򣨹����棩
void Quick_Sort(ElementType A[], int N);
void QuickSort(ElementType A[], int L, int R);
ElementType GetPivot(ElementType A[], int Left, int Right);

//������
void Heap_Sort(ElementType A[], int N);
void ShiftHeap(ElementType A[], int low, int high);

//��ѡ������
ElementType FindMin(ElementType A[], int N, int i);
void Select_Sort(ElementType A[], int N);