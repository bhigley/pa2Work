#include "pa2.h"
int main () {

	int nums[] = {7,4,6,9,10,2,5,3,8};
	int size = 9;
	vector<int> randNum; // vector containing randome data
	vector<int> sortVec; // vector containg already sorted data
	vector<int> dsortVec; // vector containing data sorted descending
	
	srand(time(0)); // needed for getting random numbers
	
	// calculating with n amount of nodes
	size = 20000;
	
	//getRandVec(randNum, size); 
	//printArray(nums, size);
	//insertSort(nums, size);
	//printArray(nums, size);
	
	// set of algorithms sorting vectors containing random data 
	getRandVec(randNum, size);
	insertSortTest(randNum, size);
	selectionSortTest(randNum, size);
	bubbleSortTest(randNum, size);
	
	cout << endl;

	// set of algorithms sorting vectors containing sorted data
	getSortedVec(sortVec, size);
	insertSortTest(sortVec, size);
	selectionSortTest(sortVec, size);
	bubbleSortTest(sortVec, size);
	
	cout << endl;
	
	// set of algorithms sorting vectors containing reverse sorted data
	getDSortedVec(dsortVec, size);
	insertSortTest(dsortVec, size);
	selectionSortTest(dsortVec, size);
	bubbleSortTest(dsortVec, size);

	return 0;
}
