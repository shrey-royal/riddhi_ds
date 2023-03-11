#include<bits/stdc++.h>
using namespace std;


// arr[0...n-1] represents sizes of packets
//m is number of students.
// Returns minimum difference between 
//maximum and minimum values of distribution.
int findminDiff(int arr[], int size, int m){
    // if there are no chocolates or number of students is 0
    if (size == 0 || m == 0)
        return 0;

    // Sort the given packets
    sort(arr, arr + size);  // O(nlogn)

    //Number of students can't be more than number of packets
    if (size < m)
        return -1;


    // Largest number of chocolates -> INT_MAX
    int min_diff = INT_MAX;

    // Find the subarray of size m such that difference between last (maximum in case of sorted) and first (minimum in case of sorted) elements of subarray is minimum.
    for (int i = 0; i + m - 1 < size; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}

// Driver code
int main() {
    // int arr[] = {12, 4, 7, 9, 2, 23, 25, 41,
                //  30, 40, 28, 42, 30, 44, 48,
                //  43, 50};
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;  // Number of students
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum difference is "
         << findminDiff(arr, size, m);

    return 0;
}