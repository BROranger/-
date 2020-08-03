#pragma once
#define ElementType int

//Ωªªª∫Ø ˝
void Swap(int &a, int &b);

//√∞≈›≈≈–Ú
void Bubble_Sort(ElementType A[], int N);

//≤Â»Î≈≈–Ú
void Insertion_Sort(ElementType A[], int N);

//’€∞Î≤Â»Î≈≈–ÚÀ„∑®
void Bin_Insertion_Sort(ElementType A[], int N);

//œ£∂˚≈≈–Ú
void Shell_Sort(ElementType A[], int N);

//πÈ≤¢≈≈–Ú
void Merge_Sort(ElementType A[], int N);
void MSort(ElementType A[], ElementType TmpA[], int L, int RE);
void Merge(ElementType A[], ElementType tmpA[], int L, int R, int RE);

//øÏÀŸ≈≈–Ú£®π≤¡Ω∞Ê£©
void Quick_Sort(ElementType A[], int N);
void QuickSort(ElementType A[], int L, int R);
ElementType GetPivot(ElementType A[], int Left, int Right);

//∂—≈≈–Ú
void Heap_Sort(ElementType A[], int N);
void ShiftHeap(ElementType A[], int low, int high);

//ºÚµ•—°‘Ò≈≈–Ú
ElementType FindMin(ElementType A[], int N, int i);
void Select_Sort(ElementType A[], int N);