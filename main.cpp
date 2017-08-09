#include<ctime>
#include<stdlib.h>
#include"BubleSorting.h"
#include"SelectionSort.h"
#include"InsertionSort.h"
#include"MergeSort.h"
#include"QuickSort.h"
#include"RadixSort.h"
int arr[] = {10,2,3,5,8,7,8,9};//11 elements
unsigned int size = 8;

void show(){
	for(int i = 0; i<size;i++)
		std::cout<<arr[i]<<" ";
	std::cout<<std::endl;
}
int main(){
	srand(time(0));
	std::cout<<"Hello Data Structure and Algorithm.\n";
	for(int i = 0; i<size;i++)
		arr[i] = rand()%200-100;
	show();
	//bubleSort(arr,size);
	//selectionSort(arr,size);
	//insertionSort(arr,size);
	//mergeSort(arr,size);
	//quickSort(arr,size);
	radixSort(arr,size);
	show();
	return 0;
}
