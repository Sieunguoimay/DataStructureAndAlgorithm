#include"Header.h"
void _mergeSort(int*arr, int first, int last){
	int mid = (first+last)/2;
	if(first!=last){
		_mergeSort(arr,first,mid);
		_mergeSort(arr,mid+1,last);
	}else return;

	int j = first;
	int k = mid+1;
	int size = last-first+1;

	int*arr1 = new int[size];
	for(int i = 0; i<size;i++){
		if(j>mid){
			arr1[i] = arr[k++];
			continue;
		}
		if(k>last){
			arr1[i] = arr[j++];
			continue;
		}
		if(arr[j]<arr[k])
			arr1[i] = arr[j++];
		else arr1[i] = arr[k++];
	}
	for(int i = first; i<=last;i++){
		arr[i] = arr1[i-first];
	}
	delete[]arr1;
}
void mergeSort(int*arr, int size){
	std::cout<<"Merge Sort:"<<std::endl;
	_mergeSort(arr, 0,size-1);
}
