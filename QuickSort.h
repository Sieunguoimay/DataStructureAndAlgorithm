#include"Header.h"
void _quickSort(int*arr,int first, int last);
void quickSort(int*arr,int size){
	std::cout<<"Quick Sort:"<<std::endl;
	_quickSort(arr,0,size-1);
}
void _quickSort(int*arr, int first,int last){
	if(first>=last)return;
	int pivot = arr[first];
	int left = first+1;
	int right = last;
	while(left<right){
		while(arr[left]<pivot){
			left++;
			if(left==last) break;
			}
		while(arr[right]>pivot){
			right--;
			if(right==first) break;
		}
		if(left!=right)
			swap(arr[left],arr[right]);
	}
	if(left!=right)
		swap(arr[left],arr[right]);

	if(first!=right)
		swap(arr[first],arr[right]);
	_quickSort(arr,first,right-1);
	_quickSort(arr,right+1,last);
}
