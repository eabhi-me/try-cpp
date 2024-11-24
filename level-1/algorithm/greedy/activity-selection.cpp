#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
using namespace std;

// pair data type
/*

pair<int,int> variName;


// ascess- variName.first or variName.second

array declaration-----
pair<int,int> variName[];
pair <int, int> variName[] = {make_pair(12, 25), make_pair(10, 20), make_pair(20, 30)};
// ascess- variName[i].first or variName[i].second

*/
// to compare the pair 
bool myCmp(pair <int, int> a, pair <int, int> b)
{
	return (a.second < b.second);
}

int maxActivities(pair <int, int> arr[], int n)
{
	sort(arr, arr + n, myCmp);

	int prev = 0;
	int res = 1;

	for(int curr = 1; curr < n; curr++)
	{
	 
		if(arr[curr].first >= arr[prev].second)
		{
			res++;

			prev = curr;
		}
	}

	return res;
}
int main()
{
	pair <int, int> arr[] = {make_pair(12, 25), make_pair(10, 20), make_pair(20, 30)};

	int n = 3;

	cout<<maxActivities(arr, n); 

	return 0;
}