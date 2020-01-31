#include "pa2.h"
//define later
void printArray(int nums[], int size) {
	int i = 0;
	for (i = 0; i < size - 1; i++) {
		cout << nums[i] << ", ";
	}
	cout << nums[i] << endl;
}


//define later
void insertSort(int nums[], int size) {
	int i, j, currValue; // other += 3
	// i = 1 loopControlAssignment++
	for (i = 1; i < size; i++) {
		// i < size loopControlComparison++
		currValue = nums[i];
		j = i - 1;
		while (j >= 0 && currValue < nums[j]) {
			nums[j + 1] = nums[j];
			j--;
		}
		nums[j + 1] = currValue;
	}
}


//tesing define later
void getRandVec(vector<int>& randNum, int size) {
	int num1 = 0;
	for (int i = 0; i < size; i++) {
		randNum.push_back(rand() % size + 1);
		//cout << i << " " << randNum.at(i) << endl;
	}
}


//testing define later
void insertSortTest(vector<int> randNum, int size) {
	//int opCount = 0; // counting operations starting at 0
	cout << "Insert test" << endl;
	int i, j, currValue;
	//opCount = opCount + 3; // 3 added for each int init
	for (i = 1; i < size; i++) {// deleted size "- 1" from starter code
		currValue = randNum.at(i);
		j = i - 1;
		while (j >= 0 && currValue < randNum.at(j)) {
			randNum.at(j + 1) = randNum.at(j);
			j--;
		}
		randNum.at(j + 1) = currValue;
	}
	//opCount++; // added for initial assignment of i
	for (int k = 0; k < size; k++) {
		//cout << randNum.at(k) << endl;
	}
}


//testing define later
void selectionSortTest(vector<int> randNum, int size) {
	cout << "Selection test" << endl;
	int i, j, minValue, minIndex;
	for (i = 0; i < size - 1; i++) {
		minIndex = i;
		minValue = randNum.at(i); // assigns first value in array to minvalue
		for (j = i + 1; j < size; j++) {
			if (randNum.at(j) < minValue) {
				minValue = randNum.at(j);
				minIndex = j;
			}
		}
		randNum.at(minIndex) = randNum.at(i);
		randNum.at(i) = minValue;
	}
	for (i = 0; i < size; i++) {//testing purposes
		//cout << randNum.at(i) << endl;
	}
}


//testing define later
void bubbleSortTest(vector<int> randNum, int size) {
	cout << "Bubble test" << endl;
	bool swap = true;
	int i;
	int temp;
	while (swap == true) {
		swap = false; // boolean condition
		for (i = 0; i < size - 1; i++) {
			if (randNum.at(i) > randNum.at(i + 1)) {
				temp = randNum.at(i);	
				randNum.at(i) = randNum.at(i + 1);
				randNum.at(i + 1) = temp;
				swap = true;
			}
		}
	}
	for (i = 0; i < size; i++) {
		//cout << randNum.at(i) << endl; // checking if sorted
	}
}


// testing define later
void getSortedVec(vector<int>& sortVec, int size) {
	for (int i = 0; i < size; i++) {
		sortVec.push_back(i + 1);
		//cout << i << " " << sortVec.at(i) << endl;
	}
}


//testing define later
void getDSortedVec(vector<int>& dsortVec, int size) {
	for (int i = 0; i < size; i++) {
		dsortVec.push_back(size - i);
		//cout << i << " " << dsortVec.at(i) << endl;
	}
}










