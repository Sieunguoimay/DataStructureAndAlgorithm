#include<ctime>
#include<stdlib.h>
#include"BubleSorting.h"
#include"SelectionSort.h"
#include"InsertionSort.h"
int arr[20];//11 elements
unsigned int size = 20;

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
	insertionSort(arr,size);
	show();
	return 0;
}
