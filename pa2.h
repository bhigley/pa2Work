#ifndef PA2_H
#define PA2_H
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
void printArray(int nums[], int size);
void insertSort(int[], int);
void insertSortTest(int[], int);//tetsing
void getRandVec(vector<int>& randNum, int size);// testing
void insertSortTest(vector<int> randNum, int size);// testing
void selectionSortTest(vector<int> randNum, int size);// testing
void bubbleSortTest(vector<int> randNum, int size);// testing
void getSortedVec(vector<int>& sortVec, int size);// testing
void getDSortedVec(vector<int>& dsortVec, int size);// testing
#endif
