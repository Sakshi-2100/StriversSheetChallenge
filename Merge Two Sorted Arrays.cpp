#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i=m-1, j=n-1,r=m+n-1;
	while(i>=0 && j>=0){
		if(arr1[i]>=arr2[j]){
			arr1[r]=arr1[i];
			i--;
		}
		else{
			arr1[r]=arr2[j];
			j--;
		}
		r--;
	}
	while(i>=0){
		arr1[r]=arr1[i];
		i--;
		r--;
	}
	while(j>=0){
		arr1[r]=arr2[j];
		j--;
		r--;
	}
	return arr1;
}