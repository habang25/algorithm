#include<iostream>
using namespace std;
#include "heap.h"

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	MaxHeap<int> maxHeap;
	maxHeap.init();
	for (int i = 0; i < 10; i++) {
		maxHeap.push(arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		cout << maxHeap.top() << endl;
		maxHeap.pop();
	}
	return 0;
}