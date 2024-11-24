/*
OPTIMIZING PROBLEM -- GREEDY ALGROTHYM

sort jobs in decreasing order of profit
initilize the result at dirst job in the started list. assign the latest possible slot
do following for the ramaning (n-1) jobs
*/




// #include<bits/stdc++.h>
// using namespace std;
// bool modofiedSort(pair<int,int>a, pair<int,int>b){
//     return (a.second>b.second);
// }

// int maximizeProfitJob(pair<int,int>arr[],int n){
//     sort(arr,arr+n,modofiedSort); // way of calling the sorting based on condition

// }
// int main(){

// }




// C++ program to find the maximum profit 
// job sequence from a given array
// of jobs with deadlines and profits
#include<iostream>
#include<algorithm>
using namespace std;

// A structure to represent a job
struct Job
{
    char id; // Job Id
    int dead; // Deadline of job
    
    // Profit if job is over 
    // before or on deadline
    int profit; 
};

// This function is used for sorting all
// jobs according to profit
bool comparison(Job a, Job b)
{
    return (a.profit > b.profit);
}

// Returns minimum number of platforms reqquired
void printJobScheduling(Job arr[], int n)
{
    // Sort all jobs according to 
    // decreasing order of prfit
    sort(arr, arr+n, comparison);

    int result[n]; // To store result (Sequence of jobs)
    bool slot[n]; // To keep track of free time slots

    // Initialize all slots to be free
    for (int i=0; i<n; i++)
        slot[i] = false;

    // Iterate through all given jobs
    for (int i=0; i<n; i++)
    {
        // Find a free slot for this job 
        // (Note that we start
        // from the last possible slot)
        for (int j=min(n, arr[i].dead)-1; j>=0; j--)
        {
            // Free slot found
            if (slot[j]==false)
            {
                result[j] = i; // Add this job to result
                slot[j] = true; // Make this slot occupied
                break;
            }
        }
    }

    // Print the result
    for (int i=0; i<n; i++)
    if (slot[i])
        cout << arr[result[i]].id << " ";
}

// Driver Code
int main()
{
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                {'d', 1, 25}, {'e', 3, 15}};
                
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Following is maximum profit sequence of job : ";
    
    printJobScheduling(arr, n);
    
    return 0;
}