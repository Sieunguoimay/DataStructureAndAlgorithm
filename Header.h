#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<vector>
void swap(int&a, int&b){
	a += b;
	b = a-b;
	a = a-b;
}
#endif//HEADER_H
