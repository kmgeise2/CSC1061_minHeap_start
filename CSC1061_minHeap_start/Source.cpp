// CSC1061_minHeap_start
// from Geeks for Geeks
// 
//Build a min heap from the array elements.
//Create an empty result array.
//While the min heap is not empty:
//Remove the minimum element from the heap.
//Add the element to the end of the result array.
//Return the result array.
//
// less<> first argument < second argument 
//    gives higher priority to larger items (maxHeap).
// greater<> first argument > second argument 
//    gives higher priority to smaller items (minHeap).

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> sortArrayInDescendingOrder(vector<int>&);
vector<int> sortArrayInAscendingOrder(vector<int>&);

int main()
{
	vector<int> arr = { 4, 6, 3, 2, 9 };
	vector<int> descend = sortArrayInDescendingOrder(arr);
	vector<int> ascend = sortArrayInAscendingOrder(arr);

	cout << "Original array " << endl;
	for (int num : arr) {
		cout << num << " ";
	}
	cout << endl;

	cout << "Ascending order" << endl;
	for (int num : ascend) {
		cout << num << " ";
	}
	cout << endl;

	cout << "Descending order" << endl;
	for (int num : descend) {
		cout << num << " ";
	}
	cout << endl;

	return 0;
}

vector<int> sortArrayInAscendingOrder(vector<int>& arr)
{
	//std::greater is a functional object which is used 
	// for performing comparisons. Here it creates a minHeap.
	priority_queue<int, vector<int>, greater<int> > minHeap;

	// Build the heap as a min Heap
	for (int num : arr) {
		minHeap.push(num);
	}

	// Build the result vector of priority sorted values
	// Insert at the end of the vector to sort ascending
	vector<int> ascend;

	while (!minHeap.empty()) {
		int top = minHeap.top();
		minHeap.pop();
		ascend.insert(ascend.end(), top);
	}

	return ascend;
}

vector<int> sortArrayInDescendingOrder(vector<int>& arr)
{
	// To Do
	vector<int>descend = arr; // Remove this code

	return descend;
}
