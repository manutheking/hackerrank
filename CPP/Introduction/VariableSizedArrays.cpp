/*
	Variable Sized Arrays
	https://www.hackerrank.com/challenges/variable-sized-arrays/problem

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main2() {

	int arrays, querys;

	cin >> arrays;
	cin >> querys;

	vector<vector<int>> major;
	vector<int> results;

	// Reading data
	for (auto i = 0; i < arrays; i++) {
		
		int subArrayLength;
		cin >> subArrayLength;

		vector<int> subArray;
		
		for (auto j = 0; j < subArrayLength; j++) {

			int aux;
			cin >> aux;
			subArray.push_back(aux);
		}

		major.push_back(subArray);
	}
	
	// Run querys
	for (auto i = 0; i < querys; i++) {

		int arrayIndex;
		int index;

		cin >> arrayIndex;
		cin >> index;

		results.push_back(major.at(arrayIndex).at(index));

	}
	
	
	for (auto a : results) {
		cout << a << endl;
	}

	
	return 0;
}