#include"Header.h"
void radixSort(int*arr,int size){
	int decNum1 = 10, decNum2 = 1;
	while(1){
		std::vector<int>bucket[10];//bucket for storing integer data
		int count = 0;
		for(int i = 0; i<size;i++){
			int index = (abs(arr[i])%decNum1)/decNum2;
			if(index) count++;
			bucket[index].push_back(arr[i]);
		}
		if(!count)return;
		int k = 0;
		//walk through the bucket to get negative numbers
		for(int i = 10; i>=0; i--)
			for(int j = bucket[i].size()-1;j>=0;j--)
				if(bucket[i].at(j)<0)
				arr[k++] = bucket[i].at(j);
		//to get positive numbers
		for(int i = 0; i<10; i++)
			for(int j = 0; j<bucket[i].size();j++)
				if(bucket[i].at(j)>0)
				arr[k++] = bucket[i].at(j);
		decNum1*=10;
		decNum2*=10;
	}	
}
