// this is some basic staring of linked list
#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;



int repeat(int arr[], int n)
{
	int slow = arr[0], fast = arr[0];

	do{
		slow = arr[slow];
		fast = arr[arr[fast]];
	
	}while(slow != fast);
	
	slow = arr[0];

	while(slow != fast)
	{
		slow = arr[slow];
		fast = arr[fast];
	}
	return slow;
}


int main() {
    

 int arr[] = {1, 3, 2, 4, 6, 5, 7, 3,8,9,10};
 int n = sizeof(arr)/sizeof(arr[0]);

 cout << repeat(arr, n);

	return 0;
}